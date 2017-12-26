#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "../include/char_include.h"	/* This .h file define DST_MAX  */

int
main(int argc, char *argv[])
{
	char *buf = "bh98fu&b83";
	char dst[DST_MAX];
	int i = 0;
	int j = 0;

	memset(dst, 0, sizeof(dst));
	while (buf[i] != '\0') {
		/* Isdigit buf[i] whether num, if is, return True  */
		if (isdigit(buf[i])) {
			dst[j] = buf[i];
			j++;
		}
		i++;
	}

	printf("dst: %s\n", dst);

	return 0;
}
