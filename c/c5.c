/*
array- zero based;

int primeNum[3]={2,3,5};
int morePrimes[]={11,13,17};
*/

#include <stdio.h>
#include <stdlib.h> //needed for exit()
#include <string.h>


void main(){



	char wholeNmae[7+1]="Ye Yuan"; //one for \0

	int primeNumbers[3]={2,3,5};

	int morePrimes[]={11,13,17,19};

	printf("The first prime in the list is %d \n\n",primeNumbers[0]);  

	char city[8]={'T','O','R','O','N','T','O','\0'};
	printf ("I live in %s \n",city);

	char thirdCity[]="Paris";//\'\0'

	char yourCity[30];

	printf("What city do you live in? ");
	fgets(yourCity,30,stdin);
	//stdin means keyboards, 30 means the length limit, you can only use 29 of them
	//the last space is reserved for \0

	printf("Hello %s\n\n",yourCity);

	for(int i=0;i<30;i++){

		if(yourCity[i]=='\n'){
			yourCity[i]='\0';
			break;
		}
	}


	printf("Is your city Paris? %d",strcmp(yourCity,thirdCity)); 

	char yourState[]=",ON";
	strcat(yourCity,yourState);//store the concated string in yourCity
	printf("You live in %s \n\n",yourCity);

	printf("Letter in Paris : %ld \n\n",strlen(thirdCity));//5

}