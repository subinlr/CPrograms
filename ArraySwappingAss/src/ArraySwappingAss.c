/*
 ============================================================================
 Name        : ArraySwappingAss.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,limit,value[100];
	printf("Enter Limit");
	fflush(stdout);
	scanf("%d",&limit);
	printf("Enter Values of Array1");
	   for(i=0;i<limit;i++){
		   fflush(stdout);
		  scanf("%d",&value[i]);
	   }
		  printf("Enter Values of Array2");
		  for(n=0;n<limit;n++){
					  scanf("%d",&value[n]);
	   }
	return EXIT_SUCCESS;
}
