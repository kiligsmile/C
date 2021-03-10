// 解密藏头诗，指针数组操作
#include <stdio.h>
int main()
{
	int i;
	char*poem[4]={"一叶轻舟向东流，","帆梢轻握杨柳手，","风纤碧波微起舞，","顺水任从雅客悠。"};
	char mean[10];
	for (i=0;i<4;i++) {
		mean[2*i]=*(poem[i]);
		mean[2*i+1]=*(poem[i]+1);
	}
	mean [2*i]='\0';
	printf("%s\n",mean);
	return 0;
}
