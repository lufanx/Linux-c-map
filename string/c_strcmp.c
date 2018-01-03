#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	char *str = "abcdefg";
	char *dest = "abcdef";
	int ret = 0;

	ret = strcmp(str, dest);
	printf("ret = %d\n", ret);
	return 0;
}
