/*
 ============================================================================
 Name        : NegativeorPositive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter A Number"); /* prints Enter a Number */
	fflush(stdout);
	scanf("%d",&num);
	if(num<0){
	printf("Number is Negative");
	}else{
		printf("Number is Positive");
	}
	return EXIT_SUCCESS;
}
