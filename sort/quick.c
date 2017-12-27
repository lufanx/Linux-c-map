#include "../include/stdinc.h"

static int
quick_call(int *buf, int startindex, int endindex)
{
	int stand = buf[startindex];

	while (startindex < endindex) {
		while (startindex < endindex && buf[startindex] <= buf[endindex]) {
			endindex--;
		}
		buf[startindex] = buf[endindex];
		while (startindex < endindex && buf[startindex] <= stand) {
			startindex++;
		}
		buf[endindex] = buf[startindex];
	}
	buf[startindex] = stand;
	
	return startindex;
}


static int *
sort_quick(int *buf, int startindex, int endindex)
{
	int ary = 0;
	if (startindex >= endindex) {
		return buf;
	}

	ary = quick_call(buf, startindex, endindex);

	sort_quick(buf, startindex, ary-1);
	sort_quick(buf, ary+1, endindex);
}

int
main(int argc, char *argv[])
{
	int buf[] = {7,10,2,1,8,20,9};
	int length = 0;
	int i = 0;
	int j = 0;
	int *p;

	length = sizeof(buf)/sizeof(int);
	j = length-1;

	p = sort_quick(buf, i, j);
	
	for (i = 0; i < length; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");

	return 0;
}
