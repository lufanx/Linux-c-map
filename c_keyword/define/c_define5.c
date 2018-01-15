#include "../../include/stdinc.h"

#define LENGTH	sizeof(buf)/sizeof(int)
#define SWOP(d, h)	do {	\
	int k = 0;	\
	k = *d;	\
	*d = *h;	\
	*h = k;	\
} while(0)

int
main(int argc, char *argv[])
{
	int buf[] = {3, 8, 1, 12, 2};
	int len	= 0;
	int i;
	int j;

	len = LENGTH;
	for (i = 0; i < len-1; i++) {
		for (j = 0; j < len-i-1; j++) {
			if (buf[j] > buf[j+1]) {
				SWOP(&buf[j], &buf[j+1]);
			}
		}
	}

	for (i = 0; i < len; i++) {
		printf("%d ", buf[i]);
	}

	printf("\n");

	return 0;
}
