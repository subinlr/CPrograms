/*
 ============================================================================
 Name        : sample.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf("Enter a number");
	fflush(stdout);
	scanf("%d",&a);
	printf("You have entered %d",a);/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
