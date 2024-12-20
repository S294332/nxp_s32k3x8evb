/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_dma.h"

uint16_t _TRACE_JAZZIO_READ_DSTATE;
uint16_t _TRACE_JAZZIO_WRITE_DSTATE;
uint16_t _TRACE_RC4030_READ_DSTATE;
uint16_t _TRACE_RC4030_WRITE_DSTATE;
uint16_t _TRACE_LEDMA_MEMORY_READ_DSTATE;
uint16_t _TRACE_LEDMA_MEMORY_WRITE_DSTATE;
uint16_t _TRACE_SPARC32_DMA_SET_IRQ_RAISE_DSTATE;
uint16_t _TRACE_SPARC32_DMA_SET_IRQ_LOWER_DSTATE;
uint16_t _TRACE_ESPDMA_MEMORY_READ_DSTATE;
uint16_t _TRACE_ESPDMA_MEMORY_WRITE_DSTATE;
uint16_t _TRACE_SPARC32_DMA_MEM_READL_DSTATE;
uint16_t _TRACE_SPARC32_DMA_MEM_WRITEL_DSTATE;
uint16_t _TRACE_SPARC32_DMA_ENABLE_RAISE_DSTATE;
uint16_t _TRACE_SPARC32_DMA_ENABLE_LOWER_DSTATE;
uint16_t _TRACE_I8257_UNREGISTERED_DMA_DSTATE;
uint16_t _TRACE_PL330_FAULT_DSTATE;
uint16_t _TRACE_PL330_FAULT_ABORT_DSTATE;
uint16_t _TRACE_PL330_DMAEND_DSTATE;
uint16_t _TRACE_PL330_DMAGO_DSTATE;
uint16_t _TRACE_PL330_DMALD_DSTATE;
uint16_t _TRACE_PL330_DMAKILL_DSTATE;
uint16_t _TRACE_PL330_DMALPEND_DSTATE;
uint16_t _TRACE_PL330_DMALPITER_DSTATE;
uint16_t _TRACE_PL330_DMALPFALLTHROUGH_DSTATE;
uint16_t _TRACE_PL330_DMASEV_EVIRQ_DSTATE;
uint16_t _TRACE_PL330_DMASEV_EVENT_DSTATE;
uint16_t _TRACE_PL330_DMAST_DSTATE;
uint16_t _TRACE_PL330_DMAWFE_DSTATE;
uint16_t _TRACE_PL330_CHAN_EXEC_UNDEF_DSTATE;
uint16_t _TRACE_PL330_EXEC_CYCLE_DSTATE;
uint16_t _TRACE_PL330_HEXDUMP_DSTATE;
uint16_t _TRACE_PL330_EXEC_DSTATE;
uint16_t _TRACE_PL330_DEBUG_EXEC_DSTATE;
uint16_t _TRACE_PL330_DEBUG_EXEC_STALL_DSTATE;
uint16_t _TRACE_PL330_IOMEM_WRITE_DSTATE;
uint16_t _TRACE_PL330_IOMEM_WRITE_CLR_DSTATE;
uint16_t _TRACE_PL330_IOMEM_READ_DSTATE;
uint16_t _TRACE_XILINX_AXIDMA_LOADING_DESC_FAIL_DSTATE;
TraceEvent _TRACE_JAZZIO_READ_EVENT = {
    .id = 0,
    .name = "jazzio_read",
    .sstate = TRACE_JAZZIO_READ_ENABLED,
    .dstate = &_TRACE_JAZZIO_READ_DSTATE 
};
TraceEvent _TRACE_JAZZIO_WRITE_EVENT = {
    .id = 0,
    .name = "jazzio_write",
    .sstate = TRACE_JAZZIO_WRITE_ENABLED,
    .dstate = &_TRACE_JAZZIO_WRITE_DSTATE 
};
TraceEvent _TRACE_RC4030_READ_EVENT = {
    .id = 0,
    .name = "rc4030_read",
    .sstate = TRACE_RC4030_READ_ENABLED,
    .dstate = &_TRACE_RC4030_READ_DSTATE 
};
TraceEvent _TRACE_RC4030_WRITE_EVENT = {
    .id = 0,
    .name = "rc4030_write",
    .sstate = TRACE_RC4030_WRITE_ENABLED,
    .dstate = &_TRACE_RC4030_WRITE_DSTATE 
};
TraceEvent _TRACE_LEDMA_MEMORY_READ_EVENT = {
    .id = 0,
    .name = "ledma_memory_read",
    .sstate = TRACE_LEDMA_MEMORY_READ_ENABLED,
    .dstate = &_TRACE_LEDMA_MEMORY_READ_DSTATE 
};
TraceEvent _TRACE_LEDMA_MEMORY_WRITE_EVENT = {
    .id = 0,
    .name = "ledma_memory_write",
    .sstate = TRACE_LEDMA_MEMORY_WRITE_ENABLED,
    .dstate = &_TRACE_LEDMA_MEMORY_WRITE_DSTATE 
};
TraceEvent _TRACE_SPARC32_DMA_SET_IRQ_RAISE_EVENT = {
    .id = 0,
    .name = "sparc32_dma_set_irq_raise",
    .sstate = TRACE_SPARC32_DMA_SET_IRQ_RAISE_ENABLED,
    .dstate = &_TRACE_SPARC32_DMA_SET_IRQ_RAISE_DSTATE 
};
TraceEvent _TRACE_SPARC32_DMA_SET_IRQ_LOWER_EVENT = {
    .id = 0,
    .name = "sparc32_dma_set_irq_lower",
    .sstate = TRACE_SPARC32_DMA_SET_IRQ_LOWER_ENABLED,
    .dstate = &_TRACE_SPARC32_DMA_SET_IRQ_LOWER_DSTATE 
};
TraceEvent _TRACE_ESPDMA_MEMORY_READ_EVENT = {
    .id = 0,
    .name = "espdma_memory_read",
    .sstate = TRACE_ESPDMA_MEMORY_READ_ENABLED,
    .dstate = &_TRACE_ESPDMA_MEMORY_READ_DSTATE 
};
TraceEvent _TRACE_ESPDMA_MEMORY_WRITE_EVENT = {
    .id = 0,
    .name = "espdma_memory_write",
    .sstate = TRACE_ESPDMA_MEMORY_WRITE_ENABLED,
    .dstate = &_TRACE_ESPDMA_MEMORY_WRITE_DSTATE 
};
TraceEvent _TRACE_SPARC32_DMA_MEM_READL_EVENT = {
    .id = 0,
    .name = "sparc32_dma_mem_readl",
    .sstate = TRACE_SPARC32_DMA_MEM_READL_ENABLED,
    .dstate = &_TRACE_SPARC32_DMA_MEM_READL_DSTATE 
};
TraceEvent _TRACE_SPARC32_DMA_MEM_WRITEL_EVENT = {
    .id = 0,
    .name = "sparc32_dma_mem_writel",
    .sstate = TRACE_SPARC32_DMA_MEM_WRITEL_ENABLED,
    .dstate = &_TRACE_SPARC32_DMA_MEM_WRITEL_DSTATE 
};
TraceEvent _TRACE_SPARC32_DMA_ENABLE_RAISE_EVENT = {
    .id = 0,
    .name = "sparc32_dma_enable_raise",
    .sstate = TRACE_SPARC32_DMA_ENABLE_RAISE_ENABLED,
    .dstate = &_TRACE_SPARC32_DMA_ENABLE_RAISE_DSTATE 
};
TraceEvent _TRACE_SPARC32_DMA_ENABLE_LOWER_EVENT = {
    .id = 0,
    .name = "sparc32_dma_enable_lower",
    .sstate = TRACE_SPARC32_DMA_ENABLE_LOWER_ENABLED,
    .dstate = &_TRACE_SPARC32_DMA_ENABLE_LOWER_DSTATE 
};
TraceEvent _TRACE_I8257_UNREGISTERED_DMA_EVENT = {
    .id = 0,
    .name = "i8257_unregistered_dma",
    .sstate = TRACE_I8257_UNREGISTERED_DMA_ENABLED,
    .dstate = &_TRACE_I8257_UNREGISTERED_DMA_DSTATE 
};
TraceEvent _TRACE_PL330_FAULT_EVENT = {
    .id = 0,
    .name = "pl330_fault",
    .sstate = TRACE_PL330_FAULT_ENABLED,
    .dstate = &_TRACE_PL330_FAULT_DSTATE 
};
TraceEvent _TRACE_PL330_FAULT_ABORT_EVENT = {
    .id = 0,
    .name = "pl330_fault_abort",
    .sstate = TRACE_PL330_FAULT_ABORT_ENABLED,
    .dstate = &_TRACE_PL330_FAULT_ABORT_DSTATE 
};
TraceEvent _TRACE_PL330_DMAEND_EVENT = {
    .id = 0,
    .name = "pl330_dmaend",
    .sstate = TRACE_PL330_DMAEND_ENABLED,
    .dstate = &_TRACE_PL330_DMAEND_DSTATE 
};
TraceEvent _TRACE_PL330_DMAGO_EVENT = {
    .id = 0,
    .name = "pl330_dmago",
    .sstate = TRACE_PL330_DMAGO_ENABLED,
    .dstate = &_TRACE_PL330_DMAGO_DSTATE 
};
TraceEvent _TRACE_PL330_DMALD_EVENT = {
    .id = 0,
    .name = "pl330_dmald",
    .sstate = TRACE_PL330_DMALD_ENABLED,
    .dstate = &_TRACE_PL330_DMALD_DSTATE 
};
TraceEvent _TRACE_PL330_DMAKILL_EVENT = {
    .id = 0,
    .name = "pl330_dmakill",
    .sstate = TRACE_PL330_DMAKILL_ENABLED,
    .dstate = &_TRACE_PL330_DMAKILL_DSTATE 
};
TraceEvent _TRACE_PL330_DMALPEND_EVENT = {
    .id = 0,
    .name = "pl330_dmalpend",
    .sstate = TRACE_PL330_DMALPEND_ENABLED,
    .dstate = &_TRACE_PL330_DMALPEND_DSTATE 
};
TraceEvent _TRACE_PL330_DMALPITER_EVENT = {
    .id = 0,
    .name = "pl330_dmalpiter",
    .sstate = TRACE_PL330_DMALPITER_ENABLED,
    .dstate = &_TRACE_PL330_DMALPITER_DSTATE 
};
TraceEvent _TRACE_PL330_DMALPFALLTHROUGH_EVENT = {
    .id = 0,
    .name = "pl330_dmalpfallthrough",
    .sstate = TRACE_PL330_DMALPFALLTHROUGH_ENABLED,
    .dstate = &_TRACE_PL330_DMALPFALLTHROUGH_DSTATE 
};
TraceEvent _TRACE_PL330_DMASEV_EVIRQ_EVENT = {
    .id = 0,
    .name = "pl330_dmasev_evirq",
    .sstate = TRACE_PL330_DMASEV_EVIRQ_ENABLED,
    .dstate = &_TRACE_PL330_DMASEV_EVIRQ_DSTATE 
};
TraceEvent _TRACE_PL330_DMASEV_EVENT_EVENT = {
    .id = 0,
    .name = "pl330_dmasev_event",
    .sstate = TRACE_PL330_DMASEV_EVENT_ENABLED,
    .dstate = &_TRACE_PL330_DMASEV_EVENT_DSTATE 
};
TraceEvent _TRACE_PL330_DMAST_EVENT = {
    .id = 0,
    .name = "pl330_dmast",
    .sstate = TRACE_PL330_DMAST_ENABLED,
    .dstate = &_TRACE_PL330_DMAST_DSTATE 
};
TraceEvent _TRACE_PL330_DMAWFE_EVENT = {
    .id = 0,
    .name = "pl330_dmawfe",
    .sstate = TRACE_PL330_DMAWFE_ENABLED,
    .dstate = &_TRACE_PL330_DMAWFE_DSTATE 
};
TraceEvent _TRACE_PL330_CHAN_EXEC_UNDEF_EVENT = {
    .id = 0,
    .name = "pl330_chan_exec_undef",
    .sstate = TRACE_PL330_CHAN_EXEC_UNDEF_ENABLED,
    .dstate = &_TRACE_PL330_CHAN_EXEC_UNDEF_DSTATE 
};
TraceEvent _TRACE_PL330_EXEC_CYCLE_EVENT = {
    .id = 0,
    .name = "pl330_exec_cycle",
    .sstate = TRACE_PL330_EXEC_CYCLE_ENABLED,
    .dstate = &_TRACE_PL330_EXEC_CYCLE_DSTATE 
};
TraceEvent _TRACE_PL330_HEXDUMP_EVENT = {
    .id = 0,
    .name = "pl330_hexdump",
    .sstate = TRACE_PL330_HEXDUMP_ENABLED,
    .dstate = &_TRACE_PL330_HEXDUMP_DSTATE 
};
TraceEvent _TRACE_PL330_EXEC_EVENT = {
    .id = 0,
    .name = "pl330_exec",
    .sstate = TRACE_PL330_EXEC_ENABLED,
    .dstate = &_TRACE_PL330_EXEC_DSTATE 
};
TraceEvent _TRACE_PL330_DEBUG_EXEC_EVENT = {
    .id = 0,
    .name = "pl330_debug_exec",
    .sstate = TRACE_PL330_DEBUG_EXEC_ENABLED,
    .dstate = &_TRACE_PL330_DEBUG_EXEC_DSTATE 
};
TraceEvent _TRACE_PL330_DEBUG_EXEC_STALL_EVENT = {
    .id = 0,
    .name = "pl330_debug_exec_stall",
    .sstate = TRACE_PL330_DEBUG_EXEC_STALL_ENABLED,
    .dstate = &_TRACE_PL330_DEBUG_EXEC_STALL_DSTATE 
};
TraceEvent _TRACE_PL330_IOMEM_WRITE_EVENT = {
    .id = 0,
    .name = "pl330_iomem_write",
    .sstate = TRACE_PL330_IOMEM_WRITE_ENABLED,
    .dstate = &_TRACE_PL330_IOMEM_WRITE_DSTATE 
};
TraceEvent _TRACE_PL330_IOMEM_WRITE_CLR_EVENT = {
    .id = 0,
    .name = "pl330_iomem_write_clr",
    .sstate = TRACE_PL330_IOMEM_WRITE_CLR_ENABLED,
    .dstate = &_TRACE_PL330_IOMEM_WRITE_CLR_DSTATE 
};
TraceEvent _TRACE_PL330_IOMEM_READ_EVENT = {
    .id = 0,
    .name = "pl330_iomem_read",
    .sstate = TRACE_PL330_IOMEM_READ_ENABLED,
    .dstate = &_TRACE_PL330_IOMEM_READ_DSTATE 
};
TraceEvent _TRACE_XILINX_AXIDMA_LOADING_DESC_FAIL_EVENT = {
    .id = 0,
    .name = "xilinx_axidma_loading_desc_fail",
    .sstate = TRACE_XILINX_AXIDMA_LOADING_DESC_FAIL_ENABLED,
    .dstate = &_TRACE_XILINX_AXIDMA_LOADING_DESC_FAIL_DSTATE 
};
TraceEvent *hw_dma_trace_events[] = {
    &_TRACE_JAZZIO_READ_EVENT,
    &_TRACE_JAZZIO_WRITE_EVENT,
    &_TRACE_RC4030_READ_EVENT,
    &_TRACE_RC4030_WRITE_EVENT,
    &_TRACE_LEDMA_MEMORY_READ_EVENT,
    &_TRACE_LEDMA_MEMORY_WRITE_EVENT,
    &_TRACE_SPARC32_DMA_SET_IRQ_RAISE_EVENT,
    &_TRACE_SPARC32_DMA_SET_IRQ_LOWER_EVENT,
    &_TRACE_ESPDMA_MEMORY_READ_EVENT,
    &_TRACE_ESPDMA_MEMORY_WRITE_EVENT,
    &_TRACE_SPARC32_DMA_MEM_READL_EVENT,
    &_TRACE_SPARC32_DMA_MEM_WRITEL_EVENT,
    &_TRACE_SPARC32_DMA_ENABLE_RAISE_EVENT,
    &_TRACE_SPARC32_DMA_ENABLE_LOWER_EVENT,
    &_TRACE_I8257_UNREGISTERED_DMA_EVENT,
    &_TRACE_PL330_FAULT_EVENT,
    &_TRACE_PL330_FAULT_ABORT_EVENT,
    &_TRACE_PL330_DMAEND_EVENT,
    &_TRACE_PL330_DMAGO_EVENT,
    &_TRACE_PL330_DMALD_EVENT,
    &_TRACE_PL330_DMAKILL_EVENT,
    &_TRACE_PL330_DMALPEND_EVENT,
    &_TRACE_PL330_DMALPITER_EVENT,
    &_TRACE_PL330_DMALPFALLTHROUGH_EVENT,
    &_TRACE_PL330_DMASEV_EVIRQ_EVENT,
    &_TRACE_PL330_DMASEV_EVENT_EVENT,
    &_TRACE_PL330_DMAST_EVENT,
    &_TRACE_PL330_DMAWFE_EVENT,
    &_TRACE_PL330_CHAN_EXEC_UNDEF_EVENT,
    &_TRACE_PL330_EXEC_CYCLE_EVENT,
    &_TRACE_PL330_HEXDUMP_EVENT,
    &_TRACE_PL330_EXEC_EVENT,
    &_TRACE_PL330_DEBUG_EXEC_EVENT,
    &_TRACE_PL330_DEBUG_EXEC_STALL_EVENT,
    &_TRACE_PL330_IOMEM_WRITE_EVENT,
    &_TRACE_PL330_IOMEM_WRITE_CLR_EVENT,
    &_TRACE_PL330_IOMEM_READ_EVENT,
    &_TRACE_XILINX_AXIDMA_LOADING_DESC_FAIL_EVENT,
  NULL,
};

static void trace_hw_dma_register_events(void)
{
    trace_event_register_group(hw_dma_trace_events);
}
trace_init(trace_hw_dma_register_events)
