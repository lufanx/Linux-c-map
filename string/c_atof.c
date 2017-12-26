#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char *buf = "100.34";
	float dst = 0;

	dst = atof(buf);

	printf("dst = %.2f\n", dst);

	return 0;
}
