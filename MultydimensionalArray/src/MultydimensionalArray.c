/*
 ============================================================================
 Name        : MultydimensionalArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,value[3][3];
	printf("Enter Values");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			fflush(stdout);
			scanf("%d",&value[i][j]);
		}
	}
	printf("Enterd Values are \n");
	printf("Colum1\tColum2\tColum3\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",value[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
