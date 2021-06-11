/*
 ============================================================================
 Name        : OddnumberSum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,sum=0;
	printf("\n");
	printf("Enter the Limit \n");
	printf("**\n");
	fflush(stdout);
	scanf("%d",&limit);
	printf("**\n");
	for(i=0;i<=limit;i++){
		if(i%2==1){
			printf("%d \n",i);
		     sum=sum+i;
		}
	}
	printf("----\n");
	printf("Sum=%d \n",sum);
	return EXIT_SUCCESS;
}
