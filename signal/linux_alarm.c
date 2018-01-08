#include "../include/stdinc.h"

static void
handle(int signalnum)
{
	printf("hello alarm\n");
}

int
main(int argc, char *argv[])
{
	int i;

	signal(SIGALRM, handle);
	alarm(5);
	for (i = 0; i < 6; i++) {
		sleep(1);
		printf("%d\n", i);
	}
	
	return 0;
}
