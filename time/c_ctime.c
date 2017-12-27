#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	time_t timep;
	time(&timep);
	char *buf = NULL;

	buf = ctime(&timep);
	
	printf("buf = %s\n", buf);
	return 0;
}
