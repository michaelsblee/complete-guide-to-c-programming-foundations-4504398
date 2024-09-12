#include <stdio.h>

int main()
{
	int artifacts, rooms, paintings, sculptures;

	/* code your calculations here */
	rooms = 12;
	paintings = 16;
	sculptures = 4;
	artifacts = (paintings + sculptures) * rooms;
	printf("This museum has %d artifacts\n", artifacts);

	return (0);
}
