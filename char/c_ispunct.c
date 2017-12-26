#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	char *buf = "ah^n$l[e";
	int i = 0;

	while (buf[i] != '\0') {
		if (ispunct(buf[i])) {
			printf("buf[%d] %c is punct char\n", i, buf[i]);
		}
		i++;
	}
	return 0;
}
