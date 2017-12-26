#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	char *buf = "ab 87 ko\tm";
	int i = 0;

	while (buf[i] != '\0') {
		if (isspace(buf[i])) {
			printf("buf[%d] is space\n", i);
		}
		i++;
	}

	return 0;
}
