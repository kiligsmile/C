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

	if (m<=n)
		min=m;
	else 
		min=n;
	for (mul=min;mul<=m*n;mul++) {
	while ((m!=0 & n!=0)) {
		if ((mul%m ==0 && mul%n == 0))
			printf("%d ",mul);

	}
	return 0;

}