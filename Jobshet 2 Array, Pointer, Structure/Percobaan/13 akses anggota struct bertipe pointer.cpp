//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>

struct person{
	int age;
	float weight;
};

int main(){
	struct person *personPtr, person1;
	personPtr= &person1;
	printf("Enter age: ");
	scanf("%d", &personPtr->age);
	printf("Enter weight: ");
	scanf("%f", &personPtr->weight);
	printf("Displaying: \n");
	printf("Age: %d\n", personPtr->age);
	printf("Weight: %f", personPtr->weight);
	return 0;
}
	
