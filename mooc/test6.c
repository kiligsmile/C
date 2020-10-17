/*
计算2/1+3/2+5/3+...
注意该序列从第二项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子
输入格式：输入在一行中给出一个正整数N
输出格式：在一行中输出部分和的值，精确到小数点后2位，题目保证计算结果不超过双精度范围
*/
#include <stdio.h>
int main()
{
	int n;
	double dividend,divisor;
	double sum = 0.0;
	int i;
	double t;
	scanf("%d",&n);
	dividend = 2;
	divisor = 1;
	for ( i=1;i<=n;i++) {
		sum += dividend/divisor;
		t = dividend;
		dividend = dividend + divisor;
		divisor = t;
	}
	printf("%f %f\n",dividend,divisor);
	printf("%.2f\n",sum);
	return 0;
}