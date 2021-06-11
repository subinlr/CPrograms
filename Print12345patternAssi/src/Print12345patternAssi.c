/*
 ============================================================================
 Name        : Print12345patternAssi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,n;
	printf("Enter the Limit \n");
	fflush(stdout);
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		for(n=1;n<=i;n++){
			printf("%d",n);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
