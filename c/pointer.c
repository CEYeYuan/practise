#include <stdio.h>
#include <stdlib.h>

void main(){
	int rand1=12,rand2=15;
	printf("rand1=%p   ramd2=%p\n\n",&rand1,&rand2);
	//hexidecimal 

	printf("Size of int %d \n\n",(int)sizeof(rand1));

	int *pRand1=&rand1;
	printf("Pointer %p \n\n",pRand1);

	printf("Value %d \n\n",*pRand1);

}