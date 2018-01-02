#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char str[] = "ab-cd, ef-lk, nj-yu";
	char *split = "-";
	char *p = NULL;

	p = strtok(str, split);
	printf("%s ", p);
	while ((p = strtok(NULL, split))) {
		printf("%s ", p);
	}

	printf("\n");

	return 0;
}
