#include<stdio.h>
int main()
{
	long long Sn=0,result=1;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		result*=i;
		Sn+=result;
	}
	printf("%lld",Sn);
	return 0;
 } 