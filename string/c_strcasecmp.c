#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char *str = "AbcDeF";
	char *dst = "aBCdEf";

	if (!strcasecmp(str, dst)) {
		printf("%s = %s\n", str, dst);
	}

	return 0;
}
