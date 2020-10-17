#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int mask = 10000;
	do {
		int d = x/mask;
		printf("%d",d);
		if (mask>9) { // 不能以x判断，若x为70000，则输出7 0000
			printf(" ");
		}
		x %= mask;
		mask /=10;
		//printf("x=%d,mask=%d,d=%d\n",x,mask,d);
	} while (mask>0);// x=0不能解决70000之类问题
	printf("\n");
	return 0;
}