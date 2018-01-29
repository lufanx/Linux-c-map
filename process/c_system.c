#include "../include/stdinc.h"


int
main(int argc, char *argv[])
{
	int ret;

	ret = system("ls -al");

	if (ret == 127) {
		fprintf(stderr, "call /bin/sh failed\n");
		exit(1);
	} else if (ret == -1) {
		fprintf(stderr, "system failed\n");
		exit(1);
	}

	return 0;
}
