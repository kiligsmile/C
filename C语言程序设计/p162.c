// 定义一个3*2的二维数组a，数组元素的值由下式给出，按矩阵的形式输出a
#include <stdio.h>
int main(void)
{
	int i,j;
	int a[3][2];
	for (i=0;i<3;i++)
		for (j=0;j<2;j++)
			a[i][j]=i+j;
	for (i=0;i<3;i++)
		for (j=0;j<2;j++) {
			printf("%d %d",i,j);
			printf("\n");
		}
		return 0;
}