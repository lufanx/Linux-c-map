#include "../../include/stdinc.h"

const char *
re_str()
{
	char *buf = "hello const";
	
	return buf;
}

int
main(int argc, char *argv[])
{
	const char *ch = re_str();	// This is error, must add  const.

	printf("ch = %s\n", ch);

	return 0;
}
