#include <stdio.h>
int main()
{
	int sum,s;
	int n,i;
	int a=2;
	sum=s=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		s=s*10+a;
		sum=sum+s;
	}
	printf("%d",sum);
	return 0;
}