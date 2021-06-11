/*
 ============================================================================
 Name        : ProjectExam.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, num,num1=0,sum=0;
	printf("Enter the number \n");
	fflush(stdout);
	scanf("%d",&num);
	for(i=1;i<=num;++i){
		num1=num1*10+9;
		sum=sum+num1;
		printf("%d\n",num1);
	}
	printf("result=%d",sum);

	return EXIT_SUCCESS;
}
