CC=gcc
CFLAGS= -Wall -g 
OBJ=trace_program.o

%.o:%.c
	$(CC) -c $(CFLAGS) -o $@ $<

trace:$(OBJ)
	$(CC) -o $@ $(OBJ)
