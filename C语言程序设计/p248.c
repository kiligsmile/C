// 简单的带参数的宏定义
// 输出两个数中，最大数的平方
#include <stdio.h>
#define MAX(a,b) a>b?a:b
#define SQR(x) x*x
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	x=MAX(x,y);
	y=SQR(x);
	printf("%d %d\n",x,y);
	return 0;
}