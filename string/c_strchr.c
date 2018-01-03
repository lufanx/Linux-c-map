#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	char *str = "0123455678";
	char dest = '5';
	char *p = NULL;

	p = strchr(str, dest);

	printf("%s\n", p);

	return 0;
}
