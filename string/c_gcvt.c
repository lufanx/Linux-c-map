#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	double a = 1234.56;
	char *dst = NULL;

	dst = (char *)malloc(sizeof(char) * 8);
	if (dst == NULL) {
		fprintf(stderr, "dst malloc failed\n");
		exit(1);
	}
	gcvt(a, 6, dst);
	printf("dst = %s\n", dst);

	free(dst);
	return 0;
}
