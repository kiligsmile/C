// 输出一个以回车符为结束标志的字符串（少于80个字符），统计其中数字字符（‘0’、...、‘9’）的个数
#include <stdio.h>
int main(void)
{
	int count,i;
	char str[80];
	printf("Enter a string:");
	i=0;
	while ((str[i]=getchar())!='\n') {
		i++;
		str[i]='\0';
	}
	count=0;
	for (i=0;str[i]!='\0';i++)
		if (str[i]<='9' && str[i]>='0')
			count++;
	printf("count=%d\n",count);
	return 0;
}