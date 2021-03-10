#include <stdio.h>
int main()
{
	int i,N;
	double h,s,Sn,sum;
	Sn=s=0;
	scanf("%lf%d",&h,&N);
	for (i=1;i<=N;i++) {
		h=h/2;
		s=3.00*h;
		Sn=Sn+s;
	}
	sum=Sn-h;
	printf("%.2lf %.2lf",h,sum);
	return 0;
}