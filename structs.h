struct food
{
	char *name;
	int price;
};

struct food makeFood();
void printStats(struct food my_food);
void changeFoodValues(struct food* my_food, char* name, int price);