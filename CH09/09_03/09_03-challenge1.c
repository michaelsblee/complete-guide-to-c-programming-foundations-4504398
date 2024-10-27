#include <stdio.h>

int main()
{
	const char filename[] = "hello.txt";
	char name[16];
	char input[64];
	FILE *fh;




	/* open/create the file */
	fh = fopen(filename, "w");
	if (fh == NULL)
	{
		puts("Failed to create file");
		return (1);
	}
	printf("Enter name: ");
	scanf("%s", name);
	/* write to the file */
	fprintf(fh, "%s has written to this file\n", name);
	fclose(fh);
	fh = fopen(filename, "r");
	if (fh == NULL)
	{
		puts("Error opening file");
		return (1);
	}
	/* read the text */
	fgets(input, 64, fh);
	printf("The file '%s' contains this text:\n", filename);
	puts(input);

	/* clean-up */
	fclose(fh);
	return 0;
}
