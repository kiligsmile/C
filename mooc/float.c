#include <stdio.h>
int main()
{
	float a,b,c;
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if (c == 2.468)
		printf("相等\n");
	else
		printf("不相等！c=%.10f,或%f\n",c,c);
	// 实际上c=%.10f的值更可靠
	return 0;
}