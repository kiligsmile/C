#include <stdio.h>
void swap(int *pa, int *pb);
int mian(void)
{
	int a = 5;
	int b = 6;
	return 0;
}

void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}