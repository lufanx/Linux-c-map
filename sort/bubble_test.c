#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	int buf[10] = {4,6,1,9,8,3,10,44,6,5};
	int i = 0;
	int j = 0;
	int k = 0;
	int length = 0;

	length = sizeof(buf)/sizeof(int);

	for (i = 0; i < length-1; i++) {
		for (j = 0; j < length-1-i; j++) {
			if (buf[j] > buf[j+1]) {
				k = buf[j];
				buf[j] = buf[j+1];
				buf[j+1] = k;	
			}
		}
	}

	for (i = 0; i < length; i++) {
		printf("%d ", buf[i]);
	}

	printf("\n");

	return 0;
}
