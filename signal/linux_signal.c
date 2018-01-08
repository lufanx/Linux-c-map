#include "../include/stdinc.h"


static void
handle(int signalnum)
{
	printf("This process pid = %d\n", getpid());
}

int
main(int argc, char *argv[])
{
	if (signal(SIGINT, handle) == SIG_ERR) {
		fprintf(stderr, "register signal failed\n");
		exit(1);
	}

	sleep(6);

	return 0;
}
