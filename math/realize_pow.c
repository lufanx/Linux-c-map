#include "../include/stdinc.h"

static int val = 0;

int
realize_pow(int i, int q)
{
	static int j = 0;	// Control time
	
	if (j == 0) {
		val = i;
	}
	if (q < 0 && j == 0) {
		fprintf(stderr, "q need >= 0\n");
		return -1;
	} else if (q == 0 && j == 0) {
		val = 1;
		return val;
	} else if (q == 1) {
		return i;	
	} else if (q > 1) {
		val = i * val;
		j++;
		q--;
		realize_pow(i, q);
		return val;
	}
}

int
main(int argc, char *argv[])
{
	int re = realize_pow(3, 0);
	if (re >= 1) {
		printf("re = %d\n", re);
	}
}
