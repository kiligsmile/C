#include <stdio.h>
int main()
{
	int a, b,j,i,Sn,all;
	double sum,c;
	Sn=all=0;

	scanf("%d%d%lf",&a,&b,&c);
	for (i=1;i<=a;i++) {
		Sn=Sn+i;
	}

	for (i=1;i<=b;i++) {
		all=all+i*i;
	}

	for (i=1;i<=c;i++) {
		sum=sum+1.0/i;
	}
	double final=Sn+all+sum;
	printf("%.2lf",final);
	return 0;
}