#include "../../include/stdinc.h"

int
main(int argc, char *argv[])
{
	int i = 5;
	int a = 6;
	const int *p = &i;

	p = &a;
	
	//*p = 6; // This is error, not by point change i value.
	i = 6;
	
	printf("i = %d\n", i);

	return 0;
}
