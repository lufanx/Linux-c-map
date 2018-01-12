#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	FILE *fp;

	if (argc < 2) {
		perror("argc");
		return 1;
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		strerror(errno);
		return 1;
	}

	return 0;
}
