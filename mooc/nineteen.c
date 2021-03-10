//不用分段
#include <stdio.h>
int main()
{
	int i,t,N;
	double Z,M,Sn;
	Sn=0;
	scanf("%d",&N);
	Z=2;
	M=1;
	for (i=1;i<=N;i++) {
		t=Z;
		Z=Z+M;
		M=t;
		Sn=Sn+Z/M;
	}
	printf("%.2lf",Sn);
	return 0;
}
