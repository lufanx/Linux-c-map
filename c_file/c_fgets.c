#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char str[100];

	memset(str, 0, 100);

	fgets(str, 100, stdin);
	
	printf("str = %s\n", str)	;

	return 0;
}
