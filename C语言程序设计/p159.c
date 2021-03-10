/*
将1个3*2的矩阵存入1个3*2的二维数组中，找出最大值以及它的行下标和列下标，并输出该矩阵
用变量row和col分别记录最大值的行下标和列下标
*/ 
#include <stdio.h>
int main(void)
{
	int col,i,j,row;
	int a[3] [2];
	printf("Enter 6 integers: \n");
	for (i=0;i<3;i++)
		for (j=0;j<2;j++)
			scanf("%d",&a[i] [j]);
	for (i=0;i<3;i++) {
		for (j=0;j<2;j++)
			printf("%4d",a[i] [j]);
		printf("\n");
	}
	row=col=0;
	for (i=0;i<3;i++)
	for (j=0;j<2;j++)
		if (a[i][j]>a[row][col]) {
			row=i;
			col=j;
		}
		printf("max=a[%d][%d]=%d\n",row,col,a[row][col]);
		return 0;
 
}