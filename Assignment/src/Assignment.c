/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	float num2,sum;
	printf("enter an intiger and a float number");
	fflush(stdout);
	scanf("%d%f",&num1,&num2);
	sum=num1+num2;
	printf("sum of the number is:%f",sum);
	fflush(stdout);
	return EXIT_SUCCESS;
}
