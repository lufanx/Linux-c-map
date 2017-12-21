#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "char_include.h"	/* DST_MAX define this .h file  */

int
main(int argc, char *argv[])
{
	char *buf = "87jipK^$";
	char dst[DST_MAX];
	int i = 0;
	int j = 0;

	memset(&dst, 0, sizeof(dst));
	while (buf[i] != '\0') {
		/* If buf[i] is alpha, isalpha() will return True  */
		if (isalpha(buf[i])) {
			dst[j] = buf[i];
			j++;
		}
		i++;
	}

	dst[DST_MAX-1] = '\0';	/* String arr as '\0' end  */
	printf("dst: %s\n", dst);

	return 0;
}
