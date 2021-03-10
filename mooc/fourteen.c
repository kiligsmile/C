#include <stdio.h>
int main()
{
	int a=2,n,i,sum=0;
	int qiuhe (int a,int n);
	scanf ("%d",&n);
	for (i=1;i<=n;i++) {
		sum+=qiuhe(a,n);
	}
	printf("%d",sum);
	return 0;
}

int qiuhe(int a,int n)
{
	int i,sum;
	if (n>=2) {
		for (i=2;i<=n;i++) {
			sum=sum*10+a;
		}
	}
	return sum;
}