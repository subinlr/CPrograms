/*
 ============================================================================
 Name        : CharArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[30];
	printf("Enter Name");
	fflush(stdout);
	scanf("%s",name);
	printf("Enterd name is: %s",name);
	return EXIT_SUCCESS;
}
