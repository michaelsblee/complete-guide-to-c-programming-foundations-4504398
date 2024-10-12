#include <stdio.h>

int main()
{
	struct date {
		int day;
		int month;
		int year;
	};
	struct person {
		struct date birthday;
		float height;
		char name[32];
	} myself = {
		{7,8,1984},
		179.3,
		"Sung Bok Lee"
	};

	printf("%s was born on %d/%d/%d and is %.5f centimeters tall.\n",
				 myself.name,
				 myself.birthday.month,
				 myself.birthday.day,
				 myself.birthday.year,
				 myself.height);
	return 0;
}
