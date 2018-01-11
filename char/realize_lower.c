#include "../include/stdinc.h"

char re_islower(char str)
{
	int i = 0;

	if (str >= 'A' && str <= 'Z') {
		str = str + 'a' - 'A';
		return str;
	}

	return str;
}

int
main(int argc, char *argv[])
{
	char buf[] = "nJklOP";
	int i = 0;
	while (buf[i] != '\0') {
		buf[i] = re_islower(buf[i]);
		i++;
	}

	printf("buf = %s\n", buf);
	return 0;
}
