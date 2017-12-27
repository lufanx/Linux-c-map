#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	int second = time((time_t *)NULL);
	printf("second = %d\n", second);
	return 0;
}
