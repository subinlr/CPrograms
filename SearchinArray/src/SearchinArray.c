/*
 ============================================================================
 Name        : SearchinArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,value[100],searchkey,flag=0;
	printf("Enter Limit\t");
	fflush(stdout);
	scanf("%d",&limit);
	printf("Enter Values\n");
	for(i=0;i<limit;i++){
		fflush(stdout);
		scanf("%d",&value[i]);
	}
	printf("Plese Enter Search Key\t");
	fflush(stdout);
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++){
		if(searchkey==value[i]){
			flag=1;
					break;
		}
	}
if(flag==1){
	printf("value found at position %d",i+1);
}else{
	printf("value not found");
}
	return EXIT_SUCCESS;
}
