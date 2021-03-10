#include <stdio.h>
int main()
{
	int a,b,min;
	printf("输入a b:");
	scanf("%d%d",&a,&b);
	if (a>b) {
		min=b;
	}
	else {
		min=a;
	}
	printf("较小值：%d",min);
	return 0;
}