#include <stdio.h>
int main()
{
	unsigned char c = 255;
	int i = 255;
	printf("c=%d,i=%d\n",c,i);
	// 00000000-11111111 0-255(unsigned) -128~127
	// 00000000 00000000 00000000 11111111
	return 0;
}