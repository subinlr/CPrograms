/*
 ============================================================================
 Name        : ArrayassiSort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,limit1,temp,value[100],value1[100];
	printf("Enter Limit\t");
	fflush(stdout);
	scanf("%d",&limit);
	printf("Enter Values of Array1\n");
	for(i=0;i<limit;i++){
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
		printf("Enter Limit\t");
			fflush(stdout);
			scanf("%d",&limit1);
			printf("Enter Values of Array2\n");
			for(i=0;i<limit1;i++){
				scanf("%d",&value1[i]);
		}
		for(i=0;i<limit1-1;i++){
					for(j=i+1;j<limit1;j++){
						if(value1[i]>value1[j]){
							temp=value1[i];
							value1[i]=value1[j];
							value1[j]=temp;


				}

			}

		}
		printf("Sort & swap Array1 :");
		for(i=0;i<limit1;i++){
			printf("%d\t",value1[i]);
		}
		printf("Sort & swap Array2 :");
		for(i=0;i<limit;i++){
				printf("%d\t",value[i]);
			}
	return EXIT_SUCCESS;
}
