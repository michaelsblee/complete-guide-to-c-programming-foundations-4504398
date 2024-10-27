#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* main program */
int main()
{
	// variable declaration
	const int size = 32;
	int x;
	char input[size];
	while (1)
	{
		printf("Command: ");
		x = 0;

		// fetch input
		fgets(input, size, stdin);
		// remove newline
		while (input[x] != '\0')
		{
			if (input[x] == '\n')
			{
				input[x] = '\0';
				break;
			}

			// convert to uppercase
			input[x] = toupper(input[x]);
			x++;
		}

		// output "Processing command 'cmd'"
		printf("Processing command '%s'\n", input);
		// break the loop on `QUIT`
		if (strcmp(input, "QUIT") == 0)
			break;
	}

	return 0;
}
