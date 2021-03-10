#include <stdio.h>
int main()
{
	int i,b,c,d;
	for (i=100;i<999;i++) {
		b=i/100;
		c=(i/10)%10;
		d=i%10;
		if (b*b*b+c*c*c+d*d*d==i) {
		printf("%d",i);
		printf("\n");
		}
	}
	return 0;


}