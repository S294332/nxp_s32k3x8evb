#include "qemu/osdep.h"
#include "qemu/units.h"
#include "qemu/cutils.h"
#include "qapi/error.h"
#include "qemu/error-report.h"
#include "hw/arm/boot.h"
#include "hw/arm/armv7m.h"
#include "hw/or-irq.h"
#include "hw/boards.h"
#include "exec/address-spaces.h"
#include "sysemu/sysemu.h"
#include "hw/qdev-properties.h"
#include "hw/misc/unimp.h"
#include "hw/qdev-clock.h"
#include "qapi/qmp/qlist.h"
#include "qom/object.h"

/* Memory Mapping Addresses
 * SRAM0: 0x20400000 - 0x2043FFFF
 * SRAM1: 0x20440000 - 0x2047FFFF
 * SRAM2: 0x20480000 - 0x204BFFFF
 * FlashRom: 0x00400000 - 0x00BFFFFF
 */


struct S32K3X8EVBMachineState {
    MachineState parent;
    Clock *sysclk;
    MemoryRegion sram0;
    MemoryRegion sram1;
    MemoryRegion sram2;
    MemoryRegion rom;
    ARMv7MState armv7m;
};

#define TYPE_S32K3X8EVB_MACHINE MACHINE_TYPE_NAME("s32k3x8evb")

OBJECT_DECLARE_TYPE(S32K3X8EVBMachineState, MachineClass, S32K3X8EVB_MACHINE)

/* Main SYSCLK frequency in Hz */
#define SYSCLK_FRQ 240000000

static void make_ram(MemoryRegion *mr, const char *name, hwaddr base, hwaddr size)
{
    memory_region_init_ram(mr, NULL, name, size, &error_fatal);
    memory_region_add_subregion(get_system_memory(), base, mr);
}

/*MakeRAM Alias*/


static void s32k3x8evb_init(MachineState *machine)
{
    S32K3X8EVBMachineState *sms = S32K3X8EVB_MACHINE(machine);
    assert(get_system_memory() != NULL);
    MemoryRegion *system_memory = get_system_memory();
    MachineClass *mc = MACHINE_GET_CLASS(machine);
    DeviceState *armv7m;

    if (machine->ram_size != mc->default_ram_size) {
        char *sz = size_to_str(mc->default_ram_size);
        error_report("Invalid RAM size, should be %s", sz);
        g_free(sz);
        exit(EXIT_FAILURE);
    }

    // Initialize the system clock
    sms->sysclk = clock_new(OBJECT(machine), "SYSCLK");
    clock_set_hz(sms->sysclk, SYSCLK_FRQ);

    // RAM mapping and initialization (256 KB per module)
    make_ram(&sms->sram0, "s32k3x8evb.sram0", 0x20400000, 0x40000);
    make_ram(&sms->sram1, "s32k3x8evb.sram1", 0x20440000, 0x40000);
    make_ram(&sms->sram2, "s32k3x8evb.sram2", 0x20480000, 0x40000);

    // ROM mapping and initialization
    if (!memory_region_init_rom(&sms->rom, NULL, "s32k3x8evb.rom",
                                0x800000, &error_abort)) {
        return;
    }
    memory_region_add_subregion(get_system_memory(), 0x00400000,
                                &sms->rom);

    // Initialize ARMv7-M processor
    object_initialize_child(OBJECT(sms), "armv7m", &sms->armv7m, TYPE_ARMV7M);
    armv7m = DEVICE(&sms->armv7m);

    // Connect system clock to ARMv7-M processor
    qdev_connect_clock_in(armv7m, "cpuclk", sms->sysclk);
    qdev_prop_set_string(armv7m, "cpu-type", machine->cpu_type);
    object_property_set_link(OBJECT(&sms->armv7m), "memory",
                                OBJECT(system_memory), &error_abort);
    sysbus_realize(SYS_BUS_DEVICE(&sms->armv7m), &error_fatal);

    // Load the kernel into the ARMv7-M processor
    armv7m_load_kernel(ARM_CPU(first_cpu), machine->kernel_filename, 0, 0x20440000);
}

static void S32K3X8EVB_class_init(ObjectClass *oc, void *data) {
    MachineClass *mc = MACHINE_CLASS(oc);
    static const char * const valid_cpu_types[] = {
        ARM_CPU_TYPE_NAME("cortex-m7"),
        NULL
    };

    mc->desc = "NXP S32K3X8EVB (ARM CORTEX M-7)";
    mc->default_cpu_type = ARM_CPU_TYPE_NAME("cortex-m7");
    mc->valid_cpu_types = valid_cpu_types;
    mc->init = s32k3x8evb_init;
    mc->max_cpus = 1;
    mc->default_ram_size = 1 * MiB;
    mc->default_ram_id = "s32k3x8evb.sram0";    
}

static const TypeInfo S32K3X8EVB_info = {
    .name = TYPE_S32K3X8EVB_MACHINE,
    .parent = TYPE_MACHINE,
    .abstract = false,
    .instance_size = sizeof(S32K3X8EVBMachineState),
    .class_size = sizeof(MachineClass),
    .class_init = S32K3X8EVB_class_init,
};

static void s32k3x8evb_machine_init(void)
{
    type_register_static(&S32K3X8EVB_info);
}

type_init(s32k3x8evb_machine_init);

