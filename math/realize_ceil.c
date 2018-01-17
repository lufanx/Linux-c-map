#include "../include/stdinc.h"

char *
realize_ceil(double i)
{
	char *buf;
	buf = (char *)malloc(1024);
	if (buf == NULL) {
		fprintf(stderr, "malloc failed\n");
		return NULL;
	}
	memset(buf, 0, 1024);
	snprintf(buf, 1024, "%f", i);
	//ltoa(i, buf, 1024);
	printf("buf = %s\n", buf);
	return buf;
}

int
main(int argc, char *argv[])
{
	double i = 4.32;
	
	char *dts = realize_ceil(i);
	printf("%s\n", dts);
	
	free(dts);
	return 0;
}
