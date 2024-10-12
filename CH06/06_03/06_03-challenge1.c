#include <stdio.h>

int main()
{
	int ages[5] = {12,45,65,73,23};
	int x;
	for (x=0;x<5;x++){
		printf("I know someone who is %d years old.\n",ages[x]);
	}
	return 0;
}
