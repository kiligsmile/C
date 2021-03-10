// 将整数n逆序输出
#include <stdio.h>
void reverse (int num);
int main()
{
	int num;
	scanf("%d",&num);
	reverse (num);
	return 0;
}
void reverse (int num)
{
	if(num<=9)
		printf("%d",num);
	else {
		printf("%d",num%10);
		reverse (num/10);
	}
}