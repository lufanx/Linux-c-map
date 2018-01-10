#include "../../include/stdinc.h"

#define P(name, num) name##num

int
main(int argc, char *argv[])
{
	char buf123[1024] = "hello";

	// printf "hello"
	printf("%s\n", P(buf, 123));

	return 0;
}
