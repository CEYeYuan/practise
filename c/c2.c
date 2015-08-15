
#include <stdio.h>
#include <string.h>

main(){
	
	char middleInitial;
	printf("What's your middle initial? \n");
	scanf(" %c",&middleInitial);
	printf("middle initial %c\n",middleInitial);

	char firstName[30],lastName[30];
	printf("What is your name ?");
	scanf("%s %s",firstName,lastName);
	printf("My name is %s %s \n",firstName,lastName);

	int month,day,year;
	printf("What's your birth date \n");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("\n Birth Date %d/%d/%d",month,day,year);
}