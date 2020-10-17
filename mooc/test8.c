/*
约分最简分式
输入格式：输入在一行中给一个分数，分子和分母中间以斜杆“/”分隔，
如：12/34.分子和分母都是正整数（不包含0，如果不清楚正整数的定义的话）
提示：在scanf的格式字符串中加入“/”，让scanf来处理这个斜杆
*/
#include <stdio.h>
int main()
{
	int dividend,divisor;
	scanf("%d/%d",&dividend, &divisor);
	int a = dividend;
	int b = divisor;
	int t;
	while (b>0) {
		t = a%b;
		a = b;
		b = t;
	}
	printf("%d/%d\n",dividend/a,divisor/a);
	return 0;
}