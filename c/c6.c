#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int golbalVar=0;

int addTwoInts(int num1,int num2){
	return num1+num2;
}

void main(){
	int total=addTwoInts(4,5);
	printf("The sum is %d\n",total);

	int age=10;
	golbalVar=50;
}