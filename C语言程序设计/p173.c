/*
进制转换。输入一个以“#”为结束标志的字符串（少于10个字符串），
滤去所有的非十六进制字符(不分大小写)，组成一个新的表示十六进制数字的字符串，
输出该字符串并将其转换为十进制数后输出
*/
#include <stdio.h>
int main(void)
{
	int i,k;
	char hexad[80],str[80];
	long number;
	printf("Enter a string:");
	i=0;
	while ((str[i]=getchar())!='#')
		i++;
	str[i]='\0';
	k=0;
	for (i=0;str[i]!='\0';i++) {
		if ((str[i]>='0' && str[i]<='9') || (str[i]>='a' && str[i]<='f') || (str[i]>='A' && str[i]<='F')) {
			hexad[k]=str[i];
			k++;
			hexad[k]='\0';
		}
	}
	printf("New string:");
	for (i=0;hexad[i]!='\0';i++)
		putchar (hexad[i]);
	printf("\n");
	number = 0;
	for (i=0;hexad[i]!='\0';i++) {
		if (hexad[i]>='0' && hexad[i]<='9')
			number=number*16+hexad[i]-'0';
		else if (hexad[i]>='A' && hexad[i]<='F')
			number=number*16+hexad[i]-'A'+10;
		else if (hexad[i]>='a' && hexad[i]<='f')
			number=number*16+hexad[i]-'a'+10;
	}
	printf("Number=%ld\n",number);
	return 0;
}