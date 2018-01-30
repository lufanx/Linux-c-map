#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	FILE *fp;
	char c;
	
	fp = fopen("file.log", "a+");
	if (fp == NULL) {
		fprintf(stderr, "fopen file failed\n");
		exit(1);
	}

	while ((c = fgetc(fp)) != EOF) {
		printf("c = %c", c);
	}
	
	printf("\n");
	
	fclose(fp);

	return 0;
}
