/*
 ============================================================================
 Name        : ProGrade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float total_mark;
	printf("Enter Your Percentage Of Mark \n");
	fflush(stdout);
	scanf("%f",&total_mark);
	if(total_mark>100){
		printf("Your have enterd wrong input");
	}else if(total_mark>=90){
		printf("Your grade is :A");
	}else if(total_mark>=80){
		printf("Your grade is :B");
	}else if(total_mark>=70){
		printf("Your Grade is :C");
	}else if(total_mark>=60){
		printf("Your grade is :D");
	}else if(total_mark>=50){
	    printf("Your grade is :E");
	}else if(total_mark<50){
		printf("Failed");
    }else{
    	printf("Wrong input");
    }
	return EXIT_SUCCESS;
}
