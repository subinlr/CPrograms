/*
 ============================================================================
 Name        : Decending.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,value[100],j,temp;
	printf("enter limit");
	fflush(stdout);
	scanf("%d",&limit);
	printf("Enter value\n");
	for(i=0;i<limit;i++){
		fflush(stdout);
		scanf("%d",&value[i]);
	}

	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(value[i]<value[j]){
			temp=value[i];
			value[i]=value[j];
			value[j]=temp;
			}
		}
	}

	printf("decending order of the array is:\t");
		for(i=0;i<limit;i++){
			printf("%d\t",value[i]);
		}

	return EXIT_SUCCESS;
}
