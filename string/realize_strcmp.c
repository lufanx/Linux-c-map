#include "../include/stdinc.h"

int
re_strcmp(char *dts, char *str)
{
	int i = 0;
	
	for (i = 0; dts[i] == str[i]; i++) {
		if (dts[i] == '\0') {
			return 0;
		}
	}
	return dts[i] - str[i];
}

int
main(int argc, char *argv[])
{
	char str[] = "hello";
	char dts[] = "hello";

	int re = 0;

	re = re_strcmp(dts, str);
	printf("%d\n", re);

	return 0;
}
