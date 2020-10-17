#include <stdio.h>
int main()
{
	int a = 1.0;
	int b = 2.0;
	double i = (double)a/b;
	// 把a转化成int，然后除以b,再把double的结果赋给整型i
	printf("%f\n",i);
	double j = (double)(a/b);
	// 先做a、b整数的除法，然后再强制转化为double，最后赋值给j
	printf("%f\n",j);
	return 0;
}