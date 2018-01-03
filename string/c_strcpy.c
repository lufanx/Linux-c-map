#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{

	char *str = "nihao";
	char dest[10];
	int i = 0;

	strcpy(dest, str);
	for (i = 0; i < 10; i++) {
		printf("%c", dest[i]);
	}
	printf("\n");
	return 0;
}
