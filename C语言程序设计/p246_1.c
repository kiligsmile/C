/*使用递归函数计算1到n之和：若要用递归函数计算sum=1+2+3+...+n(n为正整数),请写出该递归函数的递归式子及递归出口。*/
#include <stdio.h>
int sum(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
int sum(int n)
{
	int result=0;
	if(n==1){
		result=1;
	}
	else
		result=sum(n-1)+n;
	return result;
}