#include  <stdio.h>
int main (void)
{
	int x;
	scanf("%d",&x);
	int n = 0;
	do
	{
		x/=10;
		n ++;
	} while (x>0);
	printf("%d\n",n);
	return 0;
}