#include "../../include/stdinc.h"

#define PRI(y)	(#y)

int
main(int argc, char *argv[])
{
	int a = 8;

	printf("%s = %d\n", PRI(a), a);

	return 0;
}
