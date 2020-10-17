// 当d为个位时，不输出空格
#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	do {
		int d = x%10;
		printf("%d",d);
		if (x>9) {
			printf(" ");
		}
		x /=10;
	} while (x>0);
	printf("\n");
	return 0;
}