/*
 ============================================================================
 Name        : assignmentIR.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n,SI;
	printf("enter the Loan amount,IR and Tenure");
	fflush(stdout);
	scanf("%d%f%f",&P,&R,&n);
	SI=(P*R*n)/100;
	printf("Simple intrest is%f:",SI);
	fflush(stdout);
	return EXIT_SUCCESS;
}
