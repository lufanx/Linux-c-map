#include "../include/stdinc.h"


int
main(int argc, char *argv[])
{
	pid_t pid;

	pid = fork();
	if (pid == 0) {
		printf("This is childprocess pid = %d\n", getpid());
		sleep(5);
	} else {
		wait(NULL);
		printf("This is parent process pid = %d\n", getpid());
	}

	return 0;
}
