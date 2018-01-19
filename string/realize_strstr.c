#include "../include/stdinc.h"

char *
realize_strstr(char *buf, char *str)
{
	char *p = buf;
	char *q = str;
	int len = 0;
	int i = 1;
	char *flag = NULL;
	len = strlen(str);
	
	while (*p != '\0') {
		if (*p == *q) {
			flag = p;
			while (i <= len) {
				if (*p++ == *q++) {
					return flag;
				}
			}
		}
		p++;
	}
	return NULL;
}

int
main(int argc, char *argv[])
{
	char *buf = "hellop";
	char *str = "llo";
	char *local = NULL;

	local = realize_strstr(buf, str);
	printf("local = %s\n", local);

	return 0;
}
