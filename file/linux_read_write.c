#include "../include/stdinc.h"
#include "file_common.h"

int
main(int argc, char *argv[])
{
	char buf[BUFLENGTH];
	
	memset(buf, 0, BUFLENGTH);

	if (read(STDIN_FILENO, buf, BUFLENGTH) < 0) {
		fprintf(stderr, "read error\n");
		exit(1);
	}

	if (write(STDOUT_FILENO, buf, BUFLENGTH) < BUFLENGTH) {
		fprintf(stderr, "write error\n");
		exit(1);
	}

	return 0;
}
