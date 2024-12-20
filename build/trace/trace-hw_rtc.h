/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_RTC_GENERATED_TRACERS_H
#define TRACE_HW_RTC_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_ALLWINNER_RTC_READ_EVENT;
extern TraceEvent _TRACE_ALLWINNER_RTC_WRITE_EVENT;
extern TraceEvent _TRACE_SUN4V_RTC_READ_EVENT;
extern TraceEvent _TRACE_SUN4V_RTC_WRITE_EVENT;
extern TraceEvent _TRACE_XLNX_ZYNQMP_RTC_GETTIME_EVENT;
extern TraceEvent _TRACE_PL031_IRQ_STATE_EVENT;
extern TraceEvent _TRACE_PL031_READ_EVENT;
extern TraceEvent _TRACE_PL031_WRITE_EVENT;
extern TraceEvent _TRACE_PL031_ALARM_RAISED_EVENT;
extern TraceEvent _TRACE_PL031_SET_ALARM_EVENT;
extern TraceEvent _TRACE_ASPEED_RTC_READ_EVENT;
extern TraceEvent _TRACE_ASPEED_RTC_WRITE_EVENT;
extern TraceEvent _TRACE_DS1338_RECV_EVENT;
extern TraceEvent _TRACE_DS1338_SEND_EVENT;
extern TraceEvent _TRACE_M48TXX_NVRAM_IO_READ_EVENT;
extern TraceEvent _TRACE_M48TXX_NVRAM_IO_WRITE_EVENT;
extern TraceEvent _TRACE_M48TXX_NVRAM_MEM_READ_EVENT;
extern TraceEvent _TRACE_M48TXX_NVRAM_MEM_WRITE_EVENT;
extern TraceEvent _TRACE_GOLDFISH_RTC_READ_EVENT;
extern TraceEvent _TRACE_GOLDFISH_RTC_WRITE_EVENT;
extern uint16_t _TRACE_ALLWINNER_RTC_READ_DSTATE;
extern uint16_t _TRACE_ALLWINNER_RTC_WRITE_DSTATE;
extern uint16_t _TRACE_SUN4V_RTC_READ_DSTATE;
extern uint16_t _TRACE_SUN4V_RTC_WRITE_DSTATE;
extern uint16_t _TRACE_XLNX_ZYNQMP_RTC_GETTIME_DSTATE;
extern uint16_t _TRACE_PL031_IRQ_STATE_DSTATE;
extern uint16_t _TRACE_PL031_READ_DSTATE;
extern uint16_t _TRACE_PL031_WRITE_DSTATE;
extern uint16_t _TRACE_PL031_ALARM_RAISED_DSTATE;
extern uint16_t _TRACE_PL031_SET_ALARM_DSTATE;
extern uint16_t _TRACE_ASPEED_RTC_READ_DSTATE;
extern uint16_t _TRACE_ASPEED_RTC_WRITE_DSTATE;
extern uint16_t _TRACE_DS1338_RECV_DSTATE;
extern uint16_t _TRACE_DS1338_SEND_DSTATE;
extern uint16_t _TRACE_M48TXX_NVRAM_IO_READ_DSTATE;
extern uint16_t _TRACE_M48TXX_NVRAM_IO_WRITE_DSTATE;
extern uint16_t _TRACE_M48TXX_NVRAM_MEM_READ_DSTATE;
extern uint16_t _TRACE_M48TXX_NVRAM_MEM_WRITE_DSTATE;
extern uint16_t _TRACE_GOLDFISH_RTC_READ_DSTATE;
extern uint16_t _TRACE_GOLDFISH_RTC_WRITE_DSTATE;
#define TRACE_ALLWINNER_RTC_READ_ENABLED 1
#define TRACE_ALLWINNER_RTC_WRITE_ENABLED 1
#define TRACE_SUN4V_RTC_READ_ENABLED 1
#define TRACE_SUN4V_RTC_WRITE_ENABLED 1
#define TRACE_XLNX_ZYNQMP_RTC_GETTIME_ENABLED 1
#define TRACE_PL031_IRQ_STATE_ENABLED 1
#define TRACE_PL031_READ_ENABLED 1
#define TRACE_PL031_WRITE_ENABLED 1
#define TRACE_PL031_ALARM_RAISED_ENABLED 1
#define TRACE_PL031_SET_ALARM_ENABLED 1
#define TRACE_ASPEED_RTC_READ_ENABLED 1
#define TRACE_ASPEED_RTC_WRITE_ENABLED 1
#define TRACE_DS1338_RECV_ENABLED 1
#define TRACE_DS1338_SEND_ENABLED 1
#define TRACE_M48TXX_NVRAM_IO_READ_ENABLED 1
#define TRACE_M48TXX_NVRAM_IO_WRITE_ENABLED 1
#define TRACE_M48TXX_NVRAM_MEM_READ_ENABLED 1
#define TRACE_M48TXX_NVRAM_MEM_WRITE_ENABLED 1
#define TRACE_GOLDFISH_RTC_READ_ENABLED 1
#define TRACE_GOLDFISH_RTC_WRITE_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_ALLWINNER_RTC_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALLWINNER_RTC_READ) || \
    false)

static inline void _nocheck__trace_allwinner_rtc_read(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_ALLWINNER_RTC_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:allwinner_rtc_read " "addr 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 88 "trace/trace-hw_rtc.h"
        } else {
#line 4 "../hw/rtc/trace-events"
            qemu_log("allwinner_rtc_read " "addr 0x%" PRIx64 " value 0x%" PRIx64 "\n", addr, value);
#line 92 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_allwinner_rtc_read(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_allwinner_rtc_read(addr, value);
    }
}

#define TRACE_ALLWINNER_RTC_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALLWINNER_RTC_WRITE) || \
    false)

static inline void _nocheck__trace_allwinner_rtc_write(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_ALLWINNER_RTC_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:allwinner_rtc_write " "addr 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 119 "trace/trace-hw_rtc.h"
        } else {
#line 5 "../hw/rtc/trace-events"
            qemu_log("allwinner_rtc_write " "addr 0x%" PRIx64 " value 0x%" PRIx64 "\n", addr, value);
#line 123 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_allwinner_rtc_write(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_allwinner_rtc_write(addr, value);
    }
}

#define TRACE_SUN4V_RTC_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SUN4V_RTC_READ) || \
    false)

static inline void _nocheck__trace_sun4v_rtc_read(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_SUN4V_RTC_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:sun4v_rtc_read " "read: addr 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 150 "trace/trace-hw_rtc.h"
        } else {
#line 8 "../hw/rtc/trace-events"
            qemu_log("sun4v_rtc_read " "read: addr 0x%" PRIx64 " value 0x%" PRIx64 "\n", addr, value);
#line 154 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_sun4v_rtc_read(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_sun4v_rtc_read(addr, value);
    }
}

#define TRACE_SUN4V_RTC_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SUN4V_RTC_WRITE) || \
    false)

static inline void _nocheck__trace_sun4v_rtc_write(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_SUN4V_RTC_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:sun4v_rtc_write " "write: addr 0x%" PRIx64 " value 0x%" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 181 "trace/trace-hw_rtc.h"
        } else {
#line 9 "../hw/rtc/trace-events"
            qemu_log("sun4v_rtc_write " "write: addr 0x%" PRIx64 " value 0x%" PRIx64 "\n", addr, value);
#line 185 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_sun4v_rtc_write(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_sun4v_rtc_write(addr, value);
    }
}

#define TRACE_XLNX_ZYNQMP_RTC_GETTIME_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_XLNX_ZYNQMP_RTC_GETTIME) || \
    false)

static inline void _nocheck__trace_xlnx_zynqmp_rtc_gettime(int year, int month, int day, int hour, int min, int sec)
{
    if (trace_event_get_state(TRACE_XLNX_ZYNQMP_RTC_GETTIME) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:xlnx_zynqmp_rtc_gettime " "Get time from host: %d-%d-%d %2d:%02d:%02d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , year, month, day, hour, min, sec);
#line 212 "trace/trace-hw_rtc.h"
        } else {
#line 12 "../hw/rtc/trace-events"
            qemu_log("xlnx_zynqmp_rtc_gettime " "Get time from host: %d-%d-%d %2d:%02d:%02d" "\n", year, month, day, hour, min, sec);
#line 216 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_xlnx_zynqmp_rtc_gettime(int year, int month, int day, int hour, int min, int sec)
{
    if (true) {
        _nocheck__trace_xlnx_zynqmp_rtc_gettime(year, month, day, hour, min, sec);
    }
}

#define TRACE_PL031_IRQ_STATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL031_IRQ_STATE) || \
    false)

static inline void _nocheck__trace_pl031_irq_state(int level)
{
    if (trace_event_get_state(TRACE_PL031_IRQ_STATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:pl031_irq_state " "irq state %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , level);
#line 243 "trace/trace-hw_rtc.h"
        } else {
#line 15 "../hw/rtc/trace-events"
            qemu_log("pl031_irq_state " "irq state %d" "\n", level);
#line 247 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_pl031_irq_state(int level)
{
    if (true) {
        _nocheck__trace_pl031_irq_state(level);
    }
}

#define TRACE_PL031_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL031_READ) || \
    false)

static inline void _nocheck__trace_pl031_read(uint32_t addr, uint32_t value)
{
    if (trace_event_get_state(TRACE_PL031_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:pl031_read " "addr 0x%08x value 0x%08x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 274 "trace/trace-hw_rtc.h"
        } else {
#line 16 "../hw/rtc/trace-events"
            qemu_log("pl031_read " "addr 0x%08x value 0x%08x" "\n", addr, value);
#line 278 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_pl031_read(uint32_t addr, uint32_t value)
{
    if (true) {
        _nocheck__trace_pl031_read(addr, value);
    }
}

#define TRACE_PL031_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL031_WRITE) || \
    false)

static inline void _nocheck__trace_pl031_write(uint32_t addr, uint32_t value)
{
    if (trace_event_get_state(TRACE_PL031_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:pl031_write " "addr 0x%08x value 0x%08x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 305 "trace/trace-hw_rtc.h"
        } else {
#line 17 "../hw/rtc/trace-events"
            qemu_log("pl031_write " "addr 0x%08x value 0x%08x" "\n", addr, value);
#line 309 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_pl031_write(uint32_t addr, uint32_t value)
{
    if (true) {
        _nocheck__trace_pl031_write(addr, value);
    }
}

#define TRACE_PL031_ALARM_RAISED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL031_ALARM_RAISED) || \
    false)

static inline void _nocheck__trace_pl031_alarm_raised(void)
{
    if (trace_event_get_state(TRACE_PL031_ALARM_RAISED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:pl031_alarm_raised " "alarm raised" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 336 "trace/trace-hw_rtc.h"
        } else {
#line 18 "../hw/rtc/trace-events"
            qemu_log("pl031_alarm_raised " "alarm raised" "\n");
#line 340 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_pl031_alarm_raised(void)
{
    if (true) {
        _nocheck__trace_pl031_alarm_raised();
    }
}

#define TRACE_PL031_SET_ALARM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PL031_SET_ALARM) || \
    false)

static inline void _nocheck__trace_pl031_set_alarm(uint32_t ticks)
{
    if (trace_event_get_state(TRACE_PL031_SET_ALARM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:pl031_set_alarm " "alarm set for %u ticks" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , ticks);
#line 367 "trace/trace-hw_rtc.h"
        } else {
#line 19 "../hw/rtc/trace-events"
            qemu_log("pl031_set_alarm " "alarm set for %u ticks" "\n", ticks);
#line 371 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_pl031_set_alarm(uint32_t ticks)
{
    if (true) {
        _nocheck__trace_pl031_set_alarm(ticks);
    }
}

#define TRACE_ASPEED_RTC_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_RTC_READ) || \
    false)

static inline void _nocheck__trace_aspeed_rtc_read(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_ASPEED_RTC_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_rtc_read " "addr 0x%02" PRIx64 " value 0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 398 "trace/trace-hw_rtc.h"
        } else {
#line 22 "../hw/rtc/trace-events"
            qemu_log("aspeed_rtc_read " "addr 0x%02" PRIx64 " value 0x%08" PRIx64 "\n", addr, value);
#line 402 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_aspeed_rtc_read(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_aspeed_rtc_read(addr, value);
    }
}

#define TRACE_ASPEED_RTC_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ASPEED_RTC_WRITE) || \
    false)

static inline void _nocheck__trace_aspeed_rtc_write(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_ASPEED_RTC_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:aspeed_rtc_write " "addr 0x%02" PRIx64 " value 0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 429 "trace/trace-hw_rtc.h"
        } else {
#line 23 "../hw/rtc/trace-events"
            qemu_log("aspeed_rtc_write " "addr 0x%02" PRIx64 " value 0x%08" PRIx64 "\n", addr, value);
#line 433 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_aspeed_rtc_write(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_aspeed_rtc_write(addr, value);
    }
}

#define TRACE_DS1338_RECV_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DS1338_RECV) || \
    false)

static inline void _nocheck__trace_ds1338_recv(uint32_t addr, uint8_t value)
{
    if (trace_event_get_state(TRACE_DS1338_RECV) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:ds1338_recv " "[0x%" PRIx32 "] -> 0x%02" PRIx8 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 460 "trace/trace-hw_rtc.h"
        } else {
#line 26 "../hw/rtc/trace-events"
            qemu_log("ds1338_recv " "[0x%" PRIx32 "] -> 0x%02" PRIx8 "\n", addr, value);
#line 464 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_ds1338_recv(uint32_t addr, uint8_t value)
{
    if (true) {
        _nocheck__trace_ds1338_recv(addr, value);
    }
}

#define TRACE_DS1338_SEND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DS1338_SEND) || \
    false)

static inline void _nocheck__trace_ds1338_send(uint32_t addr, uint8_t value)
{
    if (trace_event_get_state(TRACE_DS1338_SEND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:ds1338_send " "[0x%" PRIx32 "] <- 0x%02" PRIx8 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 491 "trace/trace-hw_rtc.h"
        } else {
#line 27 "../hw/rtc/trace-events"
            qemu_log("ds1338_send " "[0x%" PRIx32 "] <- 0x%02" PRIx8 "\n", addr, value);
#line 495 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_ds1338_send(uint32_t addr, uint8_t value)
{
    if (true) {
        _nocheck__trace_ds1338_send(addr, value);
    }
}

#define TRACE_M48TXX_NVRAM_IO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_M48TXX_NVRAM_IO_READ) || \
    false)

static inline void _nocheck__trace_m48txx_nvram_io_read(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_M48TXX_NVRAM_IO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:m48txx_nvram_io_read " "io read addr:0x%04" PRIx64 " value:0x%02" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 522 "trace/trace-hw_rtc.h"
        } else {
#line 30 "../hw/rtc/trace-events"
            qemu_log("m48txx_nvram_io_read " "io read addr:0x%04" PRIx64 " value:0x%02" PRIx64 "\n", addr, value);
#line 526 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_m48txx_nvram_io_read(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_m48txx_nvram_io_read(addr, value);
    }
}

#define TRACE_M48TXX_NVRAM_IO_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_M48TXX_NVRAM_IO_WRITE) || \
    false)

static inline void _nocheck__trace_m48txx_nvram_io_write(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_M48TXX_NVRAM_IO_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 31 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:m48txx_nvram_io_write " "io write addr:0x%04" PRIx64 " value:0x%02" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 553 "trace/trace-hw_rtc.h"
        } else {
#line 31 "../hw/rtc/trace-events"
            qemu_log("m48txx_nvram_io_write " "io write addr:0x%04" PRIx64 " value:0x%02" PRIx64 "\n", addr, value);
#line 557 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_m48txx_nvram_io_write(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_m48txx_nvram_io_write(addr, value);
    }
}

#define TRACE_M48TXX_NVRAM_MEM_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_M48TXX_NVRAM_MEM_READ) || \
    false)

static inline void _nocheck__trace_m48txx_nvram_mem_read(uint32_t addr, uint32_t value)
{
    if (trace_event_get_state(TRACE_M48TXX_NVRAM_MEM_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 32 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:m48txx_nvram_mem_read " "mem read addr:0x%04x value:0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 584 "trace/trace-hw_rtc.h"
        } else {
#line 32 "../hw/rtc/trace-events"
            qemu_log("m48txx_nvram_mem_read " "mem read addr:0x%04x value:0x%02x" "\n", addr, value);
#line 588 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_m48txx_nvram_mem_read(uint32_t addr, uint32_t value)
{
    if (true) {
        _nocheck__trace_m48txx_nvram_mem_read(addr, value);
    }
}

#define TRACE_M48TXX_NVRAM_MEM_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_M48TXX_NVRAM_MEM_WRITE) || \
    false)

static inline void _nocheck__trace_m48txx_nvram_mem_write(uint32_t addr, uint32_t value)
{
    if (trace_event_get_state(TRACE_M48TXX_NVRAM_MEM_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 33 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:m48txx_nvram_mem_write " "mem write addr:0x%04x value:0x%02x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 615 "trace/trace-hw_rtc.h"
        } else {
#line 33 "../hw/rtc/trace-events"
            qemu_log("m48txx_nvram_mem_write " "mem write addr:0x%04x value:0x%02x" "\n", addr, value);
#line 619 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_m48txx_nvram_mem_write(uint32_t addr, uint32_t value)
{
    if (true) {
        _nocheck__trace_m48txx_nvram_mem_write(addr, value);
    }
}

#define TRACE_GOLDFISH_RTC_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GOLDFISH_RTC_READ) || \
    false)

static inline void _nocheck__trace_goldfish_rtc_read(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_GOLDFISH_RTC_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 36 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:goldfish_rtc_read " "addr 0x%02" PRIx64 " value 0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 646 "trace/trace-hw_rtc.h"
        } else {
#line 36 "../hw/rtc/trace-events"
            qemu_log("goldfish_rtc_read " "addr 0x%02" PRIx64 " value 0x%08" PRIx64 "\n", addr, value);
#line 650 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_goldfish_rtc_read(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_goldfish_rtc_read(addr, value);
    }
}

#define TRACE_GOLDFISH_RTC_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GOLDFISH_RTC_WRITE) || \
    false)

static inline void _nocheck__trace_goldfish_rtc_write(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_GOLDFISH_RTC_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 37 "../hw/rtc/trace-events"
            qemu_log("%d@%zu.%06zu:goldfish_rtc_write " "addr 0x%02" PRIx64 " value 0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 677 "trace/trace-hw_rtc.h"
        } else {
#line 37 "../hw/rtc/trace-events"
            qemu_log("goldfish_rtc_write " "addr 0x%02" PRIx64 " value 0x%08" PRIx64 "\n", addr, value);
#line 681 "trace/trace-hw_rtc.h"
        }
    }
}

static inline void trace_goldfish_rtc_write(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_goldfish_rtc_write(addr, value);
    }
}
#endif /* TRACE_HW_RTC_GENERATED_TRACERS_H */
