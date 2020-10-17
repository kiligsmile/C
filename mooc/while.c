//可以判断当n=0时的情形
#include <stdio.h>
int main (void)
{
	int x;
	int n=0;
	scanf("%d",&x);
	n++;
	x /= 10;
	while (x>0){
		n++;
		x /= 10;
	}
	printf("%d\n",n);
	return 0;
}
/*
int x;
int n=0;
scanf("%d",&x);
if (x>0) {
	while (x>0) {
	    n++;
	    x/=10;
	}
} else {
	n=1;
}
printf("%d\n",n);
return 0;
*/

