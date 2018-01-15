#include "../../include/stdinc.h"

int
main(int argc, char *argv[])
{
	int i = 5;
	int *p = &i;
	int a = 6;

	int *const q = &i;

	//q = &a;	// This is error, q not point another valiable
	
	printf("i = %d\n", *q+1);
	
	return 0;
}
