#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structs.h"

int main() 
{
	struct food meal = makeFood();
	printf("A food struct has been generated. (Printing out new food)\n");
	printStats(meal);
	printf("A hot dog has been ordered. (Changing meal.name to \"Hot Dog\" and meal.price to $2)\n");
	changeFoodValues(&meal, "Hot Dog", 1);
	printStats(meal);
	return 0;
}