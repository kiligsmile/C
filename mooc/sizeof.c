#include <stdio.h>
int main()
{
	int a;
	a = 6;
	printf("sizeof(double)=%ld\n",sizeof(long double));
	printf("sizeof(a)=%lu\n",sizeof(a));
	printf("sizeof(a++)=%ld\n",sizeof(a++));
	// 不会出现sizeof(a)=6,而sizeof(a++)=7
	printf("sizeof(a+1.0=%ld\n",sizeof(a+1.0));
    // 一个整型，加上一个浮点型，变成两个浮点型
	return 0;
}