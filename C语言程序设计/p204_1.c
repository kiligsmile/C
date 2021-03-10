// 使用scanf和printf
// 函数输入输出字符串的实例
#include <stdio.h>
int main()
{
	char str[80];
	scanf("%s",str);
	printf("%s",str);
	printf("%s","Hello");
	return 0;
} 
// 使用gets和puts函数输入输出字符串
/*#include <stdio.h>
int main()
{
	char str[80];
	gets(str);
	puts(str);
	puts("Hello");
	return 0;
} */