#include <stdio.h>
int main (void)
{
	int n;
	scanf("%d",&n);
	int fact = 1;
	int i = 1;
	for (i=2;i<=n;i++) {
		fact *= i;
	}
	printf("%d!=%d\n",n,fact);
	return 0;
}