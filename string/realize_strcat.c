#include "../include/stdinc.h"

void
realize_strcat(char *dts, char *str)
{
	char *q;
	char *p;
	int i = 0;
	int dts_len = sizeof(dts);

	p = dts;
	q = str;
	
	while (i < dts_len-1) {
		if (*p == '\0') {
			while (*q != '\0') {
				*p++ = *q++;
			}
			break;
		}
		p++;
		i++;
	}
	*p = '\0';

}

int
main(int argc, char *argv[])
{
	char buf[1024] = "hello";
	char *str = "world";
	int i = 0;

	realize_strcat(buf, str);
	for (i = 0; i < sizeof(buf); i++) {
		printf("%c", buf[i]);
	}
	printf("\n");

	return 0;
}
