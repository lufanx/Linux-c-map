#include "../include/stdinc.h"

static void
handle(int signalnum)
{
	printf("This handle signal\n");

}

int
main(int argc, char *argv[])
{
	int i = 10;
	
	signal(SIGINT, handle);
	do {
		i--;
		pause();
	} while (i < 9);


	return 0;
}
