#include "../../include/stdinc.h"

#define PRI(y)	(#y)

int
main(int argc, char *argv[])
{
	int a = 8;

	printf("%s = %d\n", PRI(a), a);	// Printf a = 8

	return 0;
}
