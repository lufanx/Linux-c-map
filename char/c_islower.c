#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "../include/char_include.h"	/* This .h file define DST_MAX  */

int
main(int argc, char *argv[])
{
	char *buf = "Lkp98HuG";
	char dst[DST_MAX];
	int i = 0;
	int j = 0;

	memset(dst, 0, sizeof(dst));
	while (buf[i] != '\0') {
		/* Islower() function check buf[i] whether lowercase, if is, will return True  */
		if (islower(buf[i])) {
			dst[j] = buf[i];
			j++;
		}
		i++;
	}

	printf("dst: %s\n", dst);

	return 0;
}
