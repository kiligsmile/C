#include <stdio.h>
int main()
{
	char c = 012;
	int i = 0x12;
	printf("c=%d,i=%d\n",c,i);
	// 我们用%d来输出的时候，就表示我们想要输出的是一个十进制的东西
	printf("c=0%o,i=0x%x\n",c,i);
	// 当我们用%o（%x）来输出的时候，就表示我们想要输出的东西是8进制(16进制)

	return 0;
}