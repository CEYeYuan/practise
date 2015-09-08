//bit manipulation
#include <stdio.h>

void main(){
	
	//gcc programName.c -o name
	// ./name instead of a.out

	printf("\n");

	int num1=1,num2=2;

	printf("is 1>2 :%d ?\n\n ",num1>num2);
	//0

	int numOfProducts=10;
	printf("I bought %s product(s)\n",numOfProducts>1? "many":"one"); 

	printf("A char takes up %ld bytes\n",sizeof(char));
	printf("A int takes up %ld bytes\n",sizeof(int));
	printf("A long int takes up %ld bytes\n",sizeof(long int));
	printf("A float takes up %ld bytes\n",sizeof(float));
	printf("A double takes up %ld bytes\n",sizeof(double));

	/*
	A char takes up 1 bytes
	A int takes up 4 bytes
	A long int takes up 8 bytes
	A float takes up 4 bytes
	A double takes up 8 bytes
	*/

	int bigInt=2147483648;
	printf("I'm bigger than you may have heard %d \n",bigInt);
	//I'm bigger than you may have heard -2147483648 overflow

	int numberHowBig=0;

	printf("How many Bits\n");
	scanf("%d",&numberHowBig);

	//0: print what is given
	//1: print what is given
	//2: 1+2=3		11
	//3: 3+4=7 		111
	//32  -1  complementary 

	int myIncrementor=1,myMultiplier=1,finalValue=1;
	while(myIncrementor<numberHowBig){
		myMultiplier*=2;
		finalValue=finalValue+myMultiplier;
		myIncrementor++;
	}

	if((numberHowBig==0)||(numberHowBig==1)){
		printf("Top Value: %d \n\n",numberHowBig);
	}else{
		printf("Top Value: %d \n\n",finalValue);
	}


}