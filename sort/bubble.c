#include "../include/stdinc.h"

#define SWAP(k, a, b)	do {	\
	k = *a;	\
	*a = *b;	\
	*b = k;	\
} while (0)

static void
sort_printf(int length, int *buf)
{
	int i = 0;
	for (i = 0; i < length; i++) {
		printf("%d ", buf[i]);
	}
	printf("\n");
}

int
main(int argc, char *argv[])
{
	int buf[] = {4,9,1,5,7,1,2};
	int i = 0;
	int j = 0;
	int length = 0;
	int k = 0;

	length = sizeof(buf)/sizeof(int);

	for (i = 0; i < length-1; i++) {
		for (j = 0; j < length-1-i; j++) {
			if (buf[j] > buf[j+1]) {
				SWAP(k, &buf[j], &buf[j+1]);
			}
		}
	}

	sort_printf(length, buf);

	return 0;
}
