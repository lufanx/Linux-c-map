#include "../include/stdinc.h"

int
main(int argc, char *argv[])
{
	char buf[] = "1234567";
	char str[] = "";
	char buf_1[] = "123 456 789";
	char dts[] = "";
	char buf_2[] = "123:456:789";
	int a, b, c;
	char buf_3[] = "679j/jiewio89%jkdiow";
	char buf_3_dts[] = "";

	//sscanf(buf, "%s", str);
	sscanf(buf, "%4s", str);
	sscanf(buf_1, "%[^ ]", dts);
	sscanf(buf_2, "%d:%d:%d", &a,&b,&c);
	sscanf(buf_3, "%[^/]/%[^%]", buf_3_dts);

	printf("str = %s\n", str);
	printf("dts = %s\n", dts);

	printf("a = %d b = %d c = %d\n", a, b, c);

	printf("buf_3_dts = %s\n", buf_3_dts);

	return 0;
}
