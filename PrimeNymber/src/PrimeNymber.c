/*
 ============================================================================
 Name        : PrimeNymber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,flag=0;
	printf("Enter aNumber\n");
	fflush(stdout);
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
		}
		if(flag==0){
			printf("Prime Number");
		}else{
			printf("Not prime Number");

	}
	return EXIT_SUCCESS;
}
