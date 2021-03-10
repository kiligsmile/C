/*
调查电视节目受欢迎程度，某电视台要调查观众对该台8个栏目（设相应栏目编号为1~8）的受欢迎情况，
共调查了1000位观众。现要求编写程序，输入每一位观众的投票情况
每位观众只能选择一个最喜欢的栏目投票），统计输出各栏目的得票情况
*/
#include <stdio.h>
int main(void)
{
	int i,response;
	int count[9];
	for (i=1;i<9;i++)
		count [i]=0;
	for (i=1;i<=5;i++) {
		printf("Enter your response:");
		scanf("%d",&response);
		if (response>=1 && response<=8)
			count [response] ++;
		else
			printf("invalid:%d\n",response);
	}
	printf("result:\n");
	for (i=1;i<=8;i++)
		printf("%4d%4d\n",i,count[i]);
	return 0;
}