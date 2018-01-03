#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define LENGTH ((sizeof(arr))/(sizeof(double)))

int
main(int argc, char *argv[])
{
	double arr[] = {1.2, 5.6, 4.3};
	int i = 0;

	for (i = 0; i < LENGTH; i++) {
		arr[i] = ceil(arr[i]);
		printf("%f ", arr[i]);
	}

	printf("\n");

	return 0;
}
