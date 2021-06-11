/*
 ============================================================================
 Name        : ProSelectDay.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int day;
	printf("1 for Sunday \n2 for Monday \n3 for Tuesday \n4 for Wednesday \n5 for Thursday \n6 for Friday \n7 for Saturday \nSeleact a number for an Appointment  \n");
	fflush(stdout);
	scanf("%d",&day);
	switch(day){
	case 1:
		printf("You got an appointment on Sunday");
		break;
	case 2:
		printf("You got an appointment on Monday");
		break;
	case 3:
		printf("You got an appointment on Tuesday");
		break;
	case 4:
	    printf("You got an appointment on Wednessday ");
	    break;
	case 5:
		printf("You got an appointment on Thursday");
	    break;
	case 6:
		printf("You got an appointment on Friday");
		break;
	case 7:
		printf("You got anappointment on Saturady");
		break;
	default:printf("Invalid Entry");

}
	return EXIT_SUCCESS;
}
