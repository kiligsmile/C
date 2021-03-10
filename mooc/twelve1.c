#include <stdio.h>
int main()
{
	int m,n,c,r,s,d;
	scanf("%d%d",&m,&n);
	r=m,
	s=n,
	c=m%n;
	while(c!=0) {
		m=n;
		n=c;
		c=m%n;
	}
	d=r*s/n;
	printf("%d %d",n,d);
	return 0;
}