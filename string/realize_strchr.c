#include "../include/stdinc.h"

char *
realize_strchr(const char *buf, char chr)
{
	const char *p = buf;
	char *q = NULL;

	int len = sizeof(buf);
	char dts[len];
	
	q = dts;

	memset(dts, 0, len);
	snprintf(dts, len, buf);
	
	while (*p != '\0') {
		if (*p == chr) {
			return q;
		}
		p++;
		q++;
	}
	return NULL;
}

int
main(int argc, char *argv[])
{
	char buf[] = "244789";
	char chr = '4';
	char *local = NULL;

	local = realize_strchr(buf, chr);
	printf("local = %s\n", local);

	return 0;
}
