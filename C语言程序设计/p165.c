// 定义函数day_of_year(year,month,day),
// 计算并返回年year、月month、日day对应的是该年的第几天
#include <stdio.h>
int day_of_year (int year,int month,int day);
int main(void)
{
	int year,month,day;
	printf("请输入年、月、日：\n");
	scanf("%d%d%d",&year,&month,&day);
	day=day_of_year(day,month,day);
	printf("%d\n",day);
	return 0;
}
int day_of_year (int year,int month,int day)
{
	int k,leap;
	int tab[2][13]={
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};
	leap = ((year%4==0 && year%100!=0) || year%400==0);
	for(k=1;k<month;k++)
		day=day+tab[leap][k];
	return day;

}