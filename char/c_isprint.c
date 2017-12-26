#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	char *buf = "&yt5 :";
	int len;
	int i = 0;

	len = strlen(buf) + 1;
	while (i <= len) {
		if (isprint(buf[i])) {
			printf("buf[%d] is print char %c\n", i, buf[i]);
		}
		i++;
	}

	return 0;
}
