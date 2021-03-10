/*
写一个程序，输出数量不确定的【0，9】范围内的整数，统计每一种数字出现的次数，输入-1表示结束
*/
#include <stdio.h>
int main(void)
{
	const int number = 10;
	int x;
	int count[number];
	int i;
	for ( i=0; i<number; i++ ) {
		count[i] = 0;
	}
	// int count[number] = {0};
	scanf("%d",&x);
	while ( x!=-1 ) {
		if ( x>=0 && x<=9 ) {
			count[x] ++;
		}
		scanf("%d",&x);
	}
	for ( i=0; i<10; i++ ) {
		printf("%d:%d\n",i,count[i]);
	}
	return 0; 
}