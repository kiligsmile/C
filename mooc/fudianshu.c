#include <stdio.h>
int main()
{
	double ff = 1234.56789;
	printf("%e,%f\n",ff,ff);
	printf("%E\n"ff);
	// %e 使用的是科学计数法
	return 0;
}