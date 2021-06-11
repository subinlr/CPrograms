/*
 ============================================================================
 Name        : ignup.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mob,password,repass,mob_user,pass_user;
	printf("SIGNUP\n");
	printf("Enter mobile Number\n");
	fflush(stdout);
	scanf("%d",&mob);
	printf("Enter Password\n");
	fflush(stdout);
	scanf("%d",&password);
	printf("Retype Password\n");
	fflush(stdout);
	scanf("%d",&repass);
	if(password==repass){
		printf("Signup Success\n");
		printf("--------------\n");
		printf("Login\n");
		printf("Enter mobile number to login:");
		fflush(stdout);
		scanf("%d",&mob_user);
		if(mob==mob_user){
			printf("Enter Password:");
			fflush(stdout);
			scanf("%d",&pass_user);
			if(password==pass_user){
				printf("!!!Welcome User!!!\n");
			}else{
				printf("!!!Login Failed!!!");
			}
		}else{printf("User not found!!!");
			}
			}else{
	printf("Signup Failed");
	}
	return EXIT_SUCCESS;
}

