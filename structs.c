#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct food
{
	char *name;
	int price;
};

struct food makeFood() {
	struct food my_food;
	srand(time(NULL));
	int n = rand() % 4;
	if (n == 0) {
		my_food.name = "Sushi";
		my_food.price = 16;
	}
	if (n == 1) {
		my_food.name = "Apple";
		my_food.price = 1;
	}
	if (n == 2) {
		my_food.name = "pho";
		my_food.price = 11;
	}
	if (n == 3) {
		my_food.name = "Enriched Uranium";
		my_food.price = 900;
	}
	return my_food;
}

void printStats(struct food my_food)
{
	printf("You have ordered one %s, the price is $%i. Bone apple tea!\n",my_food.name, my_food.price);
}

void changeFoodValues(struct food* my_food, char* new_name, int new_price)
{
	my_food->name = new_name;
	my_food->price = new_price;
}