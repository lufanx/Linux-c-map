#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char *src = "abcd";
	char dest[] = "efgh";

	strcat(dest, src);
	printf("%d %d\n", strlen(dest), sizeof(dest));

	printf("dest = %s\n", dest);
	return 0;

}
