/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s;
	printf("Enter a alphabet"); /* prints !!!Hello World!!! */
	fflush(stdout);
	scanf("%c",&s);
	printf("You have enterd this alphabet: %c",s);
	return EXIT_SUCCESS;
}

