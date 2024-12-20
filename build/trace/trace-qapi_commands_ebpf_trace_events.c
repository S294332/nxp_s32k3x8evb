/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-qapi_commands_ebpf_trace_events.h"

uint16_t _TRACE_QMP_ENTER_REQUEST_EBPF_DSTATE;
uint16_t _TRACE_QMP_EXIT_REQUEST_EBPF_DSTATE;
TraceEvent _TRACE_QMP_ENTER_REQUEST_EBPF_EVENT = {
    .id = 0,
    .name = "qmp_enter_request_ebpf",
    .sstate = TRACE_QMP_ENTER_REQUEST_EBPF_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_REQUEST_EBPF_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_REQUEST_EBPF_EVENT = {
    .id = 0,
    .name = "qmp_exit_request_ebpf",
    .sstate = TRACE_QMP_EXIT_REQUEST_EBPF_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_REQUEST_EBPF_DSTATE 
};
TraceEvent *qapi_commands_ebpf_trace_events_trace_events[] = {
    &_TRACE_QMP_ENTER_REQUEST_EBPF_EVENT,
    &_TRACE_QMP_EXIT_REQUEST_EBPF_EVENT,
  NULL,
};

static void trace_qapi_commands_ebpf_trace_events_register_events(void)
{
    trace_event_register_group(qapi_commands_ebpf_trace_events_trace_events);
}
trace_init(trace_qapi_commands_ebpf_trace_events_register_events)
