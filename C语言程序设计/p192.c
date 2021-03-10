// 实际未得到正确的输出
#include <stdio.h>
void bubble (int a[],int n);
int main()
{
	int n,a[8];
	int i;
	printf("Enter n (n<=8):");
	scanf("%d",&n);
	printf("Enter a[%d]:",n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubble(a,n);
	printf("After sorted,a[%d]=",n);
	for (i=0;i<n;i++)
		printf("%3d",a[i]);
		return 0;
}
void bubble (int a[],int n)
{
	int i,j,t;
	for (i=0;i<n-i;i++)
		for(j=0;j<n-i;j++)
			if (a[j]>a[j+1]) {
				t=a[j];a[j]=a[j+1];a[j+1]=t;
	}
}
