#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char *buf = "1000000";
	char *str = "67975";
	long i = 0;

	i = atol(buf) + atol(str);

	printf("i = %ld\n", i);
	return 0;
}
