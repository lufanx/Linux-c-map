#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	FILE *fp;

	fp = fopen("file.log", "a+");
	if (fp == NULL) {
		fprintf(stderr, "fopen file failed\n");
		exit(1);
	}

	fclose(fp);

	return 0;
}
