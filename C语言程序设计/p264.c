// 查找奥运五环色的位置，用指针数组实现
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char *color[5]={"red","blue","yellow","green","black"};
	char str [20];
	printf("Input a color:");
	scanf("%s",str);
	for(i=0;i<5;i++)
		if (strcmp(str,color[i])==0)
			break;
	if (i<5)
		printf("Position:%d\n",i+1);
	else 
		printf("Not Found\n");
	return 0;
}