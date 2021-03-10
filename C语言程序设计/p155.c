// 输出一个正整数n (1<n<=10),再输入n个整数，将它们存入数组a中
// 1.输出最小值和它所对应的下标
// 2.将最小值与第一个数交换，输出交换后的n个数
#include <stdio.h>
int main (void)
{
	int i,index,n;
	int a [10];
	printf ("Enter n:");
	scanf ("%d",&n);
	printf("Enter %d integers:",n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	index=0;
	for (i=1;i<n;i++)
		if (a [i]<a [index])
			index=i;
	printf("min is %d\tsub is %d\n",a[index],index);

	{
		int temp;
		temp = a [index];
		a [index] =a[0];
		a[0] =temp;
		for (i=0;i<n;i++)
			printf("%d", a[i]);
		return 0;
	}
}