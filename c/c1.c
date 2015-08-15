/*multiline 
comments*/
//single line 

#include <stdio.h>
#include <string.h>

#define MyName "Ye"
int globalVar =100;

main(){
	
	char firstLetter='Y';

	int age=23;

	long int superBigNum=-322222222;

	float piValue=3.14159;//32 bits

	double reallyBigPi=3.1415926534159265341592653;

	printf("\n");

	//\n    \t - tab    \\ - backslash

	printf("This will print to screen \n \n");

	/*
	yeyuan@yeyuan ~/gitRepo/pratice/c $ gcc c1.c 
	yeyuan@yeyuan ~/gitRepo/pratice/c $ ls
	a.out  c1.c
	yeyuan@yeyuan ~/gitRepo/pratice/c $ ./a.out 

	This will print to screen 
	*/
 
 	printf("I am %d years old \n\n",age);

 	//%d means integer  %ld long integer

 	printf("Big Number %ld \n\n",superBigNum);


 	printf("Pi = %.5f \n\n",piValue);

 	printf("Big Pi= %.15f \n\n",reallyBigPi);

 	printf("The first letter in my name is %c\n\n",firstLetter);

 	printf("My name is %s\n","Ye Yuan");

 	char myName[2+4+1+1]="Ye Yuan";  //last one for \0

 	printf("My name is %s\n",myName);

 	printf("Last char of the string is %c \n",myName[7]);
 	//Last char of the string is    Nothing shows off

 	strcpy(myName,"new name");

 	printf("My name is %s\n",myName);
}