#include<stdio.h>
#include<stdlib.h>
#define LIMIT 20


int main(int argc, char *argv[]){
	
	int i;
	for(i=0;i<LIMIT;i++){
		fprintf(stdout,"Printing to standard out : %d \n", i);
	}
	return 0;
}
