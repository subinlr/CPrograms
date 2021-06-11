/*
 ============================================================================
 Name        : MultiplicationTableAssai.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,ans;
	printf("Enter multiplication table Number\n");
	fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=10;++i){
		ans=i*n;
	    printf("%d*%d=%d\n",i,n,ans);

	}

	return EXIT_SUCCESS;
}
