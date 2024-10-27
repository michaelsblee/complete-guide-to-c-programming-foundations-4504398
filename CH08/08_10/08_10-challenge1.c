#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct data
	{
		int n;
		char c;
	} *struct_pointer[26];
	int x;	
	for (x=0; x<26; x++) {
		struct_pointer[x]	= malloc(sizeof(struct data));
		if (struct_pointer[x] == NULL)
		{
			puts("Memory allocation error");
			exit(1);
		}
		struct_pointer[x]->n = x;
		struct_pointer[x]->c = 'A' + x;
	}

	for (x = 0; x < 26; x++) {
		printf("int is %d\n", struct_pointer[x]->n);
		printf("char is %c\n", struct_pointer[x]->c);
	}

	for (x = 0; x < 26; x++)
		free(struct_pointer[x]);
	/*struct_pointer = malloc(sizeof(struct data));
	if (struct_pointer == NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}*/

	return 0;
}
