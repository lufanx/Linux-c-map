#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	char *buf = "19bkp&[";
	int i = 0;

	while (buf[i] != '\0') {
		if (isxdigit(buf[i])) {
			printf("buf[%d] %c is xdigit\n", i, buf[i]);
		}
		i++;
	}

	return 0;
}
