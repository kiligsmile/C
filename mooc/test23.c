#include <stdio.h>
int main()
{
	int num1,num2;
	scanf("%d\n",&num1);
	scanf("%d",&num2);
	printf("%d+%d=%d\n",num1,num2,num1+num2);
	printf("%d-%d=%d\n",num1,num2,num1-num2);
	printf("%d*%d=%d\n",num1,num2,num1*num2);
	printf("%d/%d=%d\n",num1,num2,num1/num2);
	printf("%d%%%d=%d\n",num1,num2,num1%num2);
	return 0;
}