/*
switch statement
gcc c4.c -std=c99
./a.out
gcc programName.c -o name
./name instead of ./a.out
*/
#include <stdio.h>
#include <stdlib.h>

void main(){
	int whatToDo=0;
	do{
		printf("1. What time is it? \n");
		printf("2. What is today's date\n");
		printf("3. What day is it\n");
		printf("4. Quit \n");
		scanf("%d",&whatToDo);
	}while(whatToDo<1||whatToDo>4);

	switch(whatToDo){

		case(1):printf("Print the time\n");
				break;

		case(2):printf("Print the date\n");
				break;

		case(3):printf("Print the day\n");
				break;

		default:printf("ByeBye\n");
				exit(0);
				break;
	}


}