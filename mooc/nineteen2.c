#include <stdio.h>
int main()
{
	int i,t,N;
	double Z,M,Sn;
	Sn=0;
	scanf("%d",&N);
	if (N==1) {
		Sn=2;
		printf("%.2lf",Sn);
	}
	else {
	Z=2;
	M=1;
	for (i=1;i<N;i++) {
		t=Z;
		Z=Z+M;
		M=t;
		Sn=Sn+Z/M;
	}
	//sum=Sn+2
	printf("%.2lf",Sn+2);
	}
	return 0;
}