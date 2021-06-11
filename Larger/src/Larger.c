/*
 ============================================================================
 Name        : Larger.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2;
	printf("Enter 2 Numbers"); /* prints enter 2 number */
	fflush(stdout);
	scanf("%d%d",&number1,&number2);
	if(number1>number2){
		printf("Gretest Number is %d",number1);
	}else{
		printf("Gretest Number is Number %d",number2);
	}
	return EXIT_SUCCESS;
}
