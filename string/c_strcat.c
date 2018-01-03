#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char *src = "abcd";
<<<<<<< HEAD
	char dest[] = "efgh";
=======
	char dest[] = "efg";
>>>>>>> aefca2011301a5bb2378287a346138fbe8f34382

	strcat(dest, src);
	printf("%d %d\n", strlen(dest), sizeof(dest));

	printf("dest = %s\n", dest);
	return 0;
}
