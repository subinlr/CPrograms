/*
 ============================================================================
 Name        : EvennoCount.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,value[100],count=0;
	printf("enter limit");
	fflush(stdout);
	scanf("%d",&limit);
	printf("enter values\n");
	for(i=0;i<limit;i++){
		fflush(stdout);
		scanf("%d",&value[i]);
		}

	for(i=0;i<limit;i++){
		if(value[i]%2==0){
			count=count+1;
		}
	}
	printf("count of the even number is:%d\t",count);
	return EXIT_SUCCESS;
}
