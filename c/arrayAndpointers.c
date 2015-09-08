#include <stdio.h>
#include <stdlib.h>

void generateTwoRandomNums(int* rand1,int* rand2){
	*rand1=rand()%50+1;//1 to 50
	*rand2=rand()%50+1;

	printf("New rand 1 in function= %d \n\n",*rand1);
	printf("New rand 2 in function= %d \n\n",*rand2);
}

void main(){
	int primeNumbers[]={2,3,5,7};

	printf("First index: %d\n\n",primeNumbers[0]);

	printf("First index: %d\n\n",*primeNumbers);

	printf("Second index: %d\n\n",*(primeNumbers+1));

	char * students[4]={"Sally","Mark","Paul","Sue"};
	//array of pointers

	for(int i=0;i<4;i++){
		printf("%s  %p \n\n",students[i],&students[i]);
	}

	int rand1=0,rand2=0;
	generateTwoRandomNums(&rand1,&rand2);
	printf("New rand 1 in function= %d \n\n",rand1);
	printf("New rand 2 in function= %d \n\n",rand2);
}