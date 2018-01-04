#include "../include/stdinc.h"
#include "file_common.h"

int
main(int argc, char *argv[])
{
	char buf[BUFLENGTH];

	memset(buf, 0, BUFLENGTH);
	fgets(buf, BUFLENGTH, stdin);
	if (write(STDOUT_FILENO, buf, BUFLENGTH) < BUFLENGTH) {
		fprintf(stderr, "write error\n");
		exit(1);
	}	

	return 0;
}
