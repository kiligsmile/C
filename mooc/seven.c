#include <stdio.h>
int main(void)
{
	int a,b,c,x,max;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b) x=a;
	else x=b;
	if (x>c) max=x;
	else max=c;
	printf("%d",max);
	return 0;
}