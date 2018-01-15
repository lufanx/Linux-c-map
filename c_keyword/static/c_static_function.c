#include "../../include/stdinc.h"

static int *
re_num(int *i)
{
	*i = *i+1;

	return i;
}

int
main(int argc, char *argv[])
{
	int i = 0;
	int *j = NULL;
	j = re_num(&i);
	if (*j == 1) {
		printf("j = %d\n", *j);
	}

	return 0;
}
