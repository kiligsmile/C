#include <stdio.h>
double fact (int n);
int main()
{
	int i,n;
	scanf("%d",&n);
	long long Sn=0;
	for (i=1;i<=n;i++)
		Sn=Sn+fact (i);
		printf("%lld",Sn);
	return 0;
}
double fact (int n)
{
	int i;
	long long result=1;
	for (i=1;i<=n;i++)
		result = result*i;
	return result;
}

