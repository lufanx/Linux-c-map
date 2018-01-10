#include "../../include/stdinc.h"

#define max(a,b) (a>b)?a:b

int
main(int argc, char *argv[])
{
	int a = 8;
	int b = 7;
	int c = 0;
	c = max(a,b);
	printf("c = %d\n", c);

	return 0;
}
