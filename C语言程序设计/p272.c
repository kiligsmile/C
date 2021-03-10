// 用动态分配内存方法处理多个字符串的输入
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i,n=0;
	char*color[20],str[15];
	printf("Please input some words about color:\n");
	scanf("%s",str);
	while (str[0]!='#') {
		color [n]=(char*)malloc(sizeof(char)*(strlen(str)+1));
		strcpy(color[n],str);
		n++;
		scanf("%s",str);
	}
	printf("These words are:");
	for (i=n-1;i>=0;i--) {
		printf("%s ",color[i]);
		free(color[i]);
	}
	return 0;
}