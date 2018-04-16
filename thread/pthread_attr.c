#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int main(int argc, char *argv[])
{
	int err;
	pthread_t	default_th, detach_th;

	pthread_attr_t attr;
	pthread_attr_init(&attr);
	out_state(&attr);

	if ((err = pthread_create(&default_th, &attr, th_fn, (void *)0)) != 0) {
		perror("pthread create error!");
	}
	int res;
	if ((err = pthread_join(default_th, (void *)&res)) != 0) {
		perror("pthread join error!");
	} else {
		printf ("default return is %d\n", res);
	}

	pthread_attr_setdatachstate(&attr, )

	return 0;
}
