#include <stdio.h>

int main()
{
	char item[] = "used MacBooks";
	int quantity = 3;
	float price = 700.99;
	printf("You have bought %d %s at $%.2f each.\n",
		quantity,
		item,
		price);
	printf("The total cost is $%.2f.\n", quantity * price);
	return 0;
}
