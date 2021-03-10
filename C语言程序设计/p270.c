// 将5个字符串从小到大排序后输出（用指针数组实现）
#include <stdio.h>
void fsort (int a[],int n);
int main()
{
	int i;
	int a[5]={6,5,2,8,1};
	fsort(a,5);
	for(i=0;i<5;i++)
		printf("%d",a[i]);
	return 0;
}
void fsort (int a[],int n)
{
	int k,j;
	int temp;
	for (k=1;k<n;k++)
		for (j=0;j<n-k;j++)
			if (a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}