/*
 ============================================================================
 Name        : ArrayEg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int  a[100];
	int limit,i;
	printf("Enter Array Size");
	fflush(stdout);
	scanf("%d",&limit);
	printf("Enter Values\n");
	fflush(stdout);
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("Enterd Values are:");
	for(i=0;i<limit;i++){
		printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
