#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if (x<1)
		printf("%d",y=x);
	else 
		if (x>=10)
			printf("%d",y=3*x-11);
		else
			printf("%d",y=2*x-1);
	return 0;
}