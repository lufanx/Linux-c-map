#include "../../include/stdinc.h"

#define LENGTH	sizeof(buf)/sizeof(char)

int
main(int argc, char *argv[])
{
	char buf[] = "hello";
	
	printf("%d\n", LENGTH);
	return 0;
}
