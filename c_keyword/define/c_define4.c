#include "../../include/stdinc.h"

#define P 5

int
main(int argc, char *argv[])
{
	int a = 3;

#if ! P
	#define P 5
#endif

	printf("%d\n", a*P);

	return 0;
}
