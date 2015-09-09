#include <stdio.h>
struct dogsFavs{
	char *food;
	char *friends;
};

typedef struct
//typedef struct dog
 {
	const char *name;
	const char *breed;
	int avgHeightcm;
	int avgWeightLbs;
	struct dogsFavs fav;


} dog;


void getDogFavs(dog theDog){
	printf("%s loves %s\n",theDog.name,theDog.fav.food);
}


void getmemoryLocations(dog theDog){
	printf("Name Location: %p\n",theDog.name);
	printf("Breed Location: %p\n",theDog.breed);
	printf("Avg Height Location: %p \n",&theDog.avgHeightcm);
	printf("Avg Weight Location: %p \n",&theDog.avgWeightLbs);
}

void getDogInfo(dog theDog){
	printf("Name: %s\n",theDog.name);
	printf("Breed: %s\n",theDog.breed);
	printf("Avg Height: %d cm\n",theDog.avgHeightcm);
	printf("Avg Weight: %d lbs\n",theDog.avgWeightLbs);
}

void setDogWeight(dog theDog,int newWeight){
	theDog.avgWeightLbs=newWeight;
}

void setDogWeightPtr(dog* theDog,int newWeight){
	//(*theDog).avgWeightLbs=newWeight;
	//another way
	theDog->avgWeightLbs=newWeight;

}


void main(){

	dog cujo={"Cujo","Saint Bernard",90,264,{"Meat","Joe Camp"}};

	getDogInfo(cujo);
	getDogFavs(cujo);

	dog cujo2=cujo;
	//same object; different reference

	getmemoryLocations(cujo);
	getmemoryLocations(cujo2);

	setDogWeight(cujo,11);
	getDogInfo(cujo);
	/* 
	weight is still 264. Why is that ? when a struct is passed in as a parameter,
	a new struct is created and get passed in !
	*/

	setDogWeightPtr(&cujo,11);
	getDogInfo(cujo);
	//correct way

}