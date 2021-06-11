/*
 ============================================================================
 Name        : BasicMathmaticalCalculation.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
	printf("Enter 2 numbers\n");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("\n1 for Addition\n 2 for Substraction\n 3 for Multiplication\n 4 for Division\n Enter Your Choice\n");
	fflush(stdout);
	scanf("%d",&choice);
	if (choice==1){
		result=num1+num2;
		printf("Result=%d",result);
	}else if(choice==2){
		result=num1-num2;
		printf("Result=%d",result);
	}else if(choice==3){
		result=num1*num2;
		printf("Result=%d",result);
	}else if(choice==4){
		result=num1/num2;
		printf("Result=%d",result);
	}else{
		printf("!!!You are a Fool!!!");
	}
	return EXIT_SUCCESS;
}
