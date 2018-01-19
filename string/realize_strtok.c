#include "../include/stdinc.h"

char *
realize_strtok(char *buf, char *split)
{
	static char *str;
	char *p = NULL;
	char *q = NULL;
	char j = ' ';
	static char k[1024] = "";
	static int i = 1;
	
	memset(k, 0, sizeof(k));
	if (i == 1) {
		str = buf;
	}
	p = str;
	q = str;
	while (*q != '\0') {
		if (*q == *split) {
			*q = '\0';
			j = *split;
			break;
		}
		q++;
	}
	/*
 	* if is end split q not need ++
 	*/
	if (j == *split) {
		q++;
	}
	snprintf(k, 1024, p);
	snprintf(str, 1024, q);
	i++;

	return k;
}

int
main(int argc, char *argv[])
{
	char buf[] = "h:el:lo";
	char *split = ":";
	char *dts = NULL;
	dts = realize_strtok(buf, split);
	printf("dts = %s\n", dts);
	dts = realize_strtok(NULL, split);
	printf("dts = %s\n", dts);
	dts = realize_strtok(NULL, split);
	printf("dts = %s\n", dts);

	return 0;
}
