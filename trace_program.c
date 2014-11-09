#include <stdio.h>
#include <stdlib.h>
#include "trace.h"
#define LIMIT 20


int main(int argc, char *argv[]){
    tracepoint(test_lttng,c_app_trace,"start");	
	int i;
	for(i=0;i<LIMIT;i++){
		fprintf(stdout,"Printing to standard out : %d \n", i);
		tracepoint(test_lttng,c_app_trace,"inside lopp");	
	}
	tracepoint(test_lttng,c_app_trace,"stop");	
	return 0;
}
