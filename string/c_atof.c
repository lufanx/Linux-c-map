#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char *buf = "100.34";
	float i = 0;

	i = atof(buf);

	printf("i = %.2f\n", i);

	return 0;
}
