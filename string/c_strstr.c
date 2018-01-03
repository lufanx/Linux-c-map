#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{

	char *str = "0123456789";
	char *p = NULL;

	p = strstr(str, "345");

	printf("%s\n", p);

	return 0;
}
