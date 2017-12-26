#include <ctype.h>
#include <stdio.h>

int
main(int argc, char *argv[])
{
	char *buf = "mkJlUYygg";
	int i = 0;

	while (buf[i] != '\0') {
		if (isupper(buf[i])) {
			printf("buf[%d] %c is upper char\n", i, buf[i]);
		}
		i++;
	}

	return 0;
}
