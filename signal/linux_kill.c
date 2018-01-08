#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	pid_t pid;

	pid = fork();
	if (pid < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	}

	if (pid == 0) {
		printf("This child process = %d\n", getpid());
		kill(getpid(), SIGINT);
	} else {
		printf("This pat process = %d\n", getpid());
		kill(getpid(), SIGINT);
	}
	

	return 0;
}
