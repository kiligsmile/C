#include <stdio.h>
void f(int *p);
void g(int k);
int main()
{
	int i = 6;
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	return 0;
}
void f(int *p)
{
	printf(" p=%p\n",p);
	// 注意此处将%p看成一个整体
	printf("*p=%d\n",*p);
	*p = 26;
}
void g(int k)
{
	printf("k=%d\n",k);
}