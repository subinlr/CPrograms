/*
 ============================================================================
 Name        : BreakEg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	for(i=0;i<10;i++){
		printf("Haiii \n");
		if(i==2){
			break;}
		printf("Hello \n");
	}
	printf("Finished \n");

	return EXIT_SUCCESS;
}
