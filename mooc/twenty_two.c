#include <stdio.h>
#include <math.h>
int main()
{
	double X,i,j,k;
	scanf("%lf",&X);
	i=2;
	j=(i+X/i)/2;
	while (fabs(j-i)>=0.00001) {
		i=j;
		j=(i+X/i)/2;
	}
	printf("%.3lf",i);
	return 0;
}