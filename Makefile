CC=gcc
CFLAGS= -Wall -g  
LDFLAGS= 
LDLIBS= -llttng-ust -ldl
OBJ=trace_program.o trace.o

%.o:%.c
	$(CC) -c $(CFLAGS) -o $@ $<

trace:$(OBJ)
	$(CC) $(LDFLAGS) -o $@ $(OBJ) $(LDLIBS)
