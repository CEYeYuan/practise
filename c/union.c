#include <stdio.h>
//a union only holds 1 value at a time
void main(){

	typedef union{
		short individual;
		float pound;
		float ounce;
	}amount;

	amount orangeAmt={.ounce=16};
	orangeAmt.individual=4;

	printf("Orange Juice Amount: %.2f : Size: %d\n\n",orangeAmt.ounce,(int)sizeof(orangeAmt.ounce));
	//not reliable; only one value is hold

	typedef struct{

		char *brand;
		amount theAmount;
	} orangeProduct;

	orangeProduct productOrdered={"Chiquita",.theAmount.ounce=16};

	printf("You bought %.2f ounces of %s ounces of oranges \n\n",
		productOrdered.theAmount.ounce,productOrdered.brand);


	typedef enum{
		INDIV,OUNCE,POUND
	} quantity;

	quantity quantityType=OUNCE;

	orangeAmt.individual=4;

	if(quantityType==INDIV){
		printf("You bought %d oranges \n\n",orangeAmt.individual);
	}else if(quantityType==OUNCE){
		printf("You bought %.2f ounces of  oranges \n\n",orangeAmt.ounce);
	}else{
		printf("You bought %.2f pounds of  oranges \n\n",orangeAmt.pound);
	}

}