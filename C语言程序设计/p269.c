// 找奥运五环色的位置，用二级指针操作指针数组
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char *color[5]={"red","blue","yellow","green","black"};
	char **pc;
	char str[20];
	pc=color;
	printf("Input a color:");
	scanf("%s",str);
	for (i=0;i<5;i++)
		if(strcmp(str,*(pc+i))==0)
			break;
		if(i<5)
			printf("position:%d\n",i+1);
		else 
			printf("Not Found\n");
		return 0;
}