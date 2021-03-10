#include <stdio.h>
int main()
{
	int num,num1,num2,num3;
	scanf("%d",&num);
	num1=num;
	int n=1;
	num1 /= 10;
	while (num1>0) {
		n++;
		num1 /= 10;
	}	
	printf("%d\n",n);

	num2=num;
	int mask = 1;
	int t=num2;
	while (t>9) {
		t /= 10;
		mask *=10;
	}
	do {
		int d = num2/mask;
		printf("%d",d);
		if (mask>9) { 
			printf(" ");
		}
		num2 %= mask;
		mask /=10;
	} while (mask>0);
	printf("\n");

	num3=num;
	int ret = 0;
	int digit;
	while (num3>0) {
		digit = num3%10;
		printf("%d",digit);
		ret = ret*10 + digit;
		num3 /= 10;

	}

	
	return 0;
}
