#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "char_include.h"	/* DST_MAX define this .h file  */

int
main(int argc, char *argv[])
{
	char *buf = "k2oH$c4m&Y98";
	char dst[DST_MAX];
	int i = 0;
	int j = 0;

	memset(&dst, 0, DST_MAX);
	while (buf[i] != '\0') {
		/* If buf[i] is alnum will return True  */
		if (isalnum(buf[i])) {
			dst[j] = buf[i];
			j++;
		}
		i++;
	}

	dst[DST_MAX-1] = '\0';

	printf("dst: %s\n", dst);

	return 0;
}
