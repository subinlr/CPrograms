/*
 ============================================================================
 Name        : ProPassorFail.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	printf("Enter your Mark\n");
	fflush(stdout);
	scanf("%f",&mark);
	printf("Your Exam Score is:%f out of 100\n",mark);
	if(mark>=50){
		printf("Congratulation!!!  You have Passed!!!");
	}else{
		printf(" so You Failed\n better luck next time");
	}

	return EXIT_SUCCESS;
}
