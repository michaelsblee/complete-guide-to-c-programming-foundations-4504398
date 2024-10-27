#include <stdio.h>

int main()
{
	char text[10];
	char *pt;
	printf("Type something: ");
	scanf("%s",text);
	printf("You typed: %s\n",text);
	pt=text;
	printf("add of text=%p\n",text);
	printf("add of pt=%p\n", pt);
	return(0);
}
