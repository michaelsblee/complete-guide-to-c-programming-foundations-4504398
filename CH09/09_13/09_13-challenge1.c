#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(const char *f)
{
		FILE *fp;

		fp = fopen(f, "w");
		if (fp == NULL)
		{
				printf("Error creating file!\n");
				exit(1);
		}
		printf("File '%s' created\n", f);

		fprintf(fp, "Michael");
		puts("Name written to file\n");

		fclose(fp);
		printf("File '%s' closed\n", f);
		
}

void read_file(const char *f)
{
	FILE *fh;
	char buffer[32];

	fh = fopen(f, "r");
	if (fh==NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}
	printf("File '%s' opened\n", f);

	fgets(buffer,32,fh);
	printf("Data read from file %s: %s\n", f, buffer);
	fclose(fh);
	printf("File '%s' closed\n", f);
}

void delete_file(const char *f)
{
	int r;
	r = unlink(f);
	if (r == 0)
	{
		printf("File '%s' deleted\n", f);
	}
	else
	{
		puts("Error deleting file");
	}
}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return 0;
}
