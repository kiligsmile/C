// 求n的阶乘
#include <stdio.h>
double fact(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%f",fact(n));
	return 0;
}
double fact (int n)
{
	double result;
	if(n==1||n==0)
		result=1;
	else 
		result=n*fact (n-1);
	return result;
}