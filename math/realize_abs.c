#include "../include/stdinc.h"

int
realize_abs(int num)
{
	return num < 0 ? -num : num;
}

int
main(int argc, char *argv[])
{
	int i = -5;
	int q = 8;
	printf("i = %d q = %d\n", realize_abs(i), realize_abs(q));
	return 0;
}
