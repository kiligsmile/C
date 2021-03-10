#include <stdio.h>
int main()
{
	int i,N,s,Sn;
	s=1;
	scanf("%d",&N);
	if (N!=1) {
		for (i=N-1;i>0;i--) {
			Sn=2*s+2;
			s=Sn;
		}
		printf("%d\n",Sn);
	}
	else {
		printf("%d",Sn=1);

	}
	return 0;
}