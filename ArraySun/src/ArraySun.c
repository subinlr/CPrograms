/*
 ============================================================================
 Name        : ArraySun.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,sum=0,value[100];
	printf("Enter Array Size -");
	fflush(stdout);
	fflush(stdout);
	scanf("%d",&limit);
	printf("Enter Values");
	for(i=0;i<limit;i++){
		fflush(stdout);
		scanf("%d",&value[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+value[i];
	}
	printf("Result: %d",sum);
	return EXIT_SUCCESS;
}
