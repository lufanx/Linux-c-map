#include "../include/stdinc.h"
#include "file_common.h"

int
main(int argc, char *argv[])
{
	int fd;
	int size = 0;
	char buf[BUFLENGTH];

	memset(buf, 0, BUFLENGTH);

	fd = open("file", O_CREAT|O_RDWR);
	if (fd < 0) {
		fprintf(stderr, "open file error\n");
		exit(1);
	}

	lseek(fd, 10, SEEK_SET);
	while ((size = read(fd, buf, BUFLENGTH)) > 0) {
		if (write(STDOUT_FILENO, buf, size) < size) {
			fprintf(stderr, "write error\n");
			break;
		}
	}

	close(fd);

	return 0;
}
