#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>


void *
th_fn(void *arg)
{

	int i;
	for (i = 0; i <= (int)arg; i++) {
		sleep(1);
		printf ("%lx is %d\n", pthread_self(), i);
	}
	
	return (void *)0;
}


int main(int argc, char *argv[])
{

	int err;
	pthread_t rubbit, yu;

	// create rubbit thread
	if ((err = pthread_create(&rubbit, NULL, th_fn, (void *)50)) != 0) {
		perror("create rubbit thread error!");
	}

	// create yu thread
	if ((err = pthread_create(&yu, NULL, th_fn, (void *)50)) != 0) {
		perror("create yu thread error!");
	}

	// control thread wait that rubbit and yu thread run end.
	pthread_join(rubbit, NULL);
	pthread_join(yu, NULL);

	printf ("control thread is %lx\n", pthread_self());
	
	return 0;
}
