#include "../include/stdinc.h"

double
realize_ceil(double i)
{
	char *buf;
	char *split = ".";
	char *p = NULL;
	double val = 0;

	buf = (char *)malloc(1024);
	if (buf == NULL) {
		fprintf(stderr, "malloc failed\n");
		return 1;
	}

	memset(buf, 0, 1024);
	snprintf(buf, 1024, "%f", i);
	p = strtok(buf, split);
	val = atoi(p)+1;
	free(buf);

	return val;
}

int
main(int argc, char *argv[])
{
	double i = 1.98;
	
	i = realize_ceil(i);
	printf("%f\n", i);
	
	return 0;
}
