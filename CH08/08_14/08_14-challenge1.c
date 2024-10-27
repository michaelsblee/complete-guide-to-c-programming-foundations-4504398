#include <stdio.h>
#include <stdlib.h>

// write the get_input() function here
char *get_input(size_t size) {
	char *p;
	int x = 0;

	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}
	// read input
	fgets(p, size, stdin);
	// remove newline
	while( *(p+x) != '\0' )
	{
		if( *(p+x) == '\n' )
		{
			*(p+x) = '\0';
			break;
		}
		x++;
	}
	return(p);
}

int main()
{
	char *your_name,*your_city;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n",your_name,your_city);
	free(your_name);
	free(your_city);
	return 0;
}
