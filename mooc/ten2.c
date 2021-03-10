#include <stdio.h>
int main()
{
	int m,n,i,min,gcd,mul;
	scanf("%d%d",&m,&n);

	int t;
	gcd=m;
	i=n;
	while (n!=0) {
		t = gcd%i;
		gcd=i;
		i=t;
	}
	printf("%d",gcd);
	return 0;
}