#include "../include/stdinc.h"


static void
usage(const char *prog)
{
	printf("usage: %s filename\n", prog);
}


int
main(int argc, char *argv[])
{
	FILE *f;
	char *filename;

	if (argc < 2) {
		fprintf(stderr, "argc error\n");
		usage(argv[0]);
		return 1;
	}
	
	filename = argv[1];

	f = fopen(filename, "r");
	if (f == NULL) {
		perror("fopen");	// Will printf fopen: No such this file or device.
		return 1;
	}

	return 0;
}
