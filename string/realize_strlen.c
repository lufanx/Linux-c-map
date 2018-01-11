#include "../include/stdinc.h"

int
re_length(char *buf)
{
	int i = 0;
	while (buf[i] != '\0') {
		++i;
	}

	return i;

}

int
main(int argc, char *argv[])
{
	char buf[] = "hello world";

	int re = re_length(buf);

	printf("re = %d\n", re);

	return 0;
}
