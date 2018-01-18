#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	int ch[5] = {3, 5, 6, 9, 1};
	int (*p)[5];
	int *q[5];
	
	q[0] = &ch[0];
	p = &ch;

	int len1 = sizeof(p);	// 64bits len1 = 8
	int len2 = sizeof(q);	// 64bits len2 = 5*8

	printf("len1 = %d\n", len1);
	printf("len2 = %d\n", len2);

	printf("q = %d\n", *p[0]);	// 3
	printf("a = %d\n", *p[0]);	// 3

	return 0;
}
