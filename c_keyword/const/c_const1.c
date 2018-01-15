#include "../../include/stdinc.h"

int
main(int argc, char *argv[])
{
	const char *ch = "abcdef";

	const int i = 4;

	//i = i+1;	// This error, i not be changed

	printf("i = %d\n", i);

	printf("ch = %s\n", ch);

	return 0;
}
