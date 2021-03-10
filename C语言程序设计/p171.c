/*输入一个以回车符为结束标志的字符串（少于10个字符），
提取其中的所有数字字符（’0‘...’9‘），将其转换为一个十进制整数输出
*/
#include <stdio.h>
int main(void)
{
	int i,number;
	char str[10];
	printf("Enter a string:");
	i=0;
	while((str[i]=getchar())!='\n') 
		i++;
	str[i]='\0';
	number=0;
	for (i=0;str[i]!='\0';i++)
		if (str[i]>='0' && str[i]<='9')
			number=number*10+str[i]-'0';
	printf("digit=%d\n",number);
	return 0;
}