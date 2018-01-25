#include "../include/stdinc.h"

int
my_printf(const char *format, ...)
{
	va_list ap;
	int re;
	va_start(ap, format);
	
	re = vprintf(format, ap);
	va_end(ap);

	return re;

}

int
main(int argc, char *argv[])
{

	int a = 100;
	int b = -200;
	double c = 3.14567;
	int re;

	re = my_printf("%d %d %f\n", a, b, c);
	if (re < 0) {
		fprintf(stderr, "%s format failed\n", "my_printf");
		exit(1);
	}

	return 0;
}
