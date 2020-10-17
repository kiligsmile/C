#include <stdio.h>
int main ()
{
	int x;
	x = 700;
	int digit;
	int ret = 0;
	while (x>0) {
		digit = x%10;
		printf("%d",digit);
		ret = ret*10 + digit;
		x /= 10;
	}
	return 0;
}