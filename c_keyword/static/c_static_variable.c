#include "../../include/stdinc.h"

void start_static();
void start_common();

int
main(int argc, char *argv[])
{
	start_static();	// a = 0
	start_static();	// a = 1

	start_common();	// a = 0
	start_common();	// a = 0

	return 0;
}

void
start_common()
{
	int a = 0;

	printf("a = %d\n", a);
	a++;
}

void
start_static()
{
	static int a = 0;

	printf("a = %d\n", a);
	a++;
}
