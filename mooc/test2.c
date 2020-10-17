/*水仙花数是指一个N位数（N>=3）,它的每个位上的数字的N次幂
之和等于它本身。
输入格式：输入在一行中给出一个正整数N(3<=N<=7).
输出格式：按递增顺序输出所有N位水仙花数，每个数字占一行。
153=1^3+5^3+3^3
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int first = 1;
	int i=1;
	while(i<n) {
		first *= 10;
		i ++;
	}
	// printf("first=%d\n",first);
	// 遍历100-999
	i = first;
	while (i<first*10) {
		int t=i;
		int sum = 0;
		do {
			int d = t%10;
			t/=10;
			int p = d;
			int j =1;
			while(j<n) {
				p *=d;
				j++;
			}
			sum +=p;
		}while (t>0);
		if (sum ==i) {
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}