
 ============================================================================
 Name        : Signup.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mob,password,repass;
	printf("SIGNUP\n");
	printf("Enter mobile number\n");
	fflush(stdout);
	scanf("%d",&mob);
	printf("Enter Password\n");
	fflush(stdout);
	scanf("%d",&password);
	printf("retype Password\n");
	fflush(stdout);
	scanf("%d",&repass);
	if(password==repass){
		printf("Signup Success");
	}else{
	printf("Signup Failed");
	}
	return EXIT_SUCCESS;
}
