#include <stdio.h>

void line(int a, char c) {

	for (;a>0;a--) 
		putchar(c);
	putchar('\n');
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35,'-');

	return(0);
}
