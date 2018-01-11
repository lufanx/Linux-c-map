#include "../include/stdinc.h"

char *re_strcpy(char *dts, char *str)
{
	while ((*dts++ = *str++) != '\0') {
		;
	}
	return dts;
}

int
main(int argc, char *argv[])
{
	char buf[] = "helloworld";
	int length = 0;
	length = sizeof(buf);
	char dts[length];

	memset(dts, 0, sizeof(dts));

	re_strcpy(dts, buf);

	printf("dts = %s\n", dts);
	return 0;
}
