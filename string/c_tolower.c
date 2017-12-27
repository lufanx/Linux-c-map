#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char *buf = "BHlpohYt";
	char dst[9];
	int i = 0;

	memset(dst, 0, sizeof(dst));
	while (buf[i] != '\0') {
		dst[i] = tolower(buf[i]);
		i++;
	}
	printf("dst = %s\n", dst);
	return 0;
}
