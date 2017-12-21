#include <ctype.h>
#include <stdio.h>

int
main(int argc, char *argv[])
{
	int i = 126;

	/* 0-127 all belong to ASCII  */
	while (i < 130) {
		/* Is i is ASCII isascii() will return True  */
		if (isascii(i)) {
			printf("%d is ASCII\n", i);
		} else {
			printf("%d not is ASCII\n", i);
		}
		i++;
	}

	return 0;
}
