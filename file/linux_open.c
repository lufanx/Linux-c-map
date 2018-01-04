#include "../include/stdinc.h"
#include "file_common.h"

int
main(int argc, char *argv[])
{
	int fd;
	int size = 0;
	char buf[BUFLENGTH];

	memset(buf, 0, BUFLENGTH);
	
	fd = open("file", O_CREAT|O_RDONLY);
	if (fd  < 0) {
		fprintf(stderr, "open file error\n");
		exit(1);
	}

	while ((size = read(fd, buf, BUFLENGTH)) > 0) {
		printf("%d\n", size);
		if (write(STDOUT_FILENO, buf, size) < size) {
			fprintf(stderr, "write error\n");
			exit(1);
		}
	}

	close(fd);

	return 0;
}
