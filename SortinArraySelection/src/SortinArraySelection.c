/*
 ============================================================================
 Name        : SortinArraySelection.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : SortinArraySelection.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j,value[100],temp;
	printf("Enter Limit:\t");
	fflush(stdout);
	scanf("%d",&limit);
	printf("enter values\n");
	for(i=0;i<limit;i++){
		fflush(stdout);
		scanf("%d",&value[i]);
	}

		for(i=0;i<limit-1;i++){
           for(j=i+1;j<limit;j++){
        	   if(value[i]>value[j]){
        		   temp=value[i];
        		   value[i]=value[j];
        		   value[j]=temp;
        	   }
           }
		}
		printf("Sorted Result is \n");
		for(i=0;i<limit;i++){
			printf("%d\n",value[i]);
		}
	return EXIT_SUCCESS;
}
