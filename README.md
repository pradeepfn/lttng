lttng
=====

LTTng test program


commands
==================

lttng-gen-tp trace.tp
make
lttng create myuserspacesession
lttng enable-event --userspace test_lttng:c_app_trace
lttng start
./trace
lttng stop
lttng view
