// 将程序输入的英里转化成米，英尺和英寸转换成厘米
#include <stdio.h>
#define Mile_to_meter 1609
#define Foot_to_centimeter 30.48
#define Inch_to_centimeter 2.54
int main()
{
	float foot,inch,mile;
	printf("Input mile,foot and inch:");
	scanf("%f%f%f",&mile,&foot,&inch);
	printf("%fmiles=%fmeters\n",mile,mile*Mile_to_meter);
	printf("%f feet=%f centimeters\n",foot,foot*Foot_to_centimeter);
	printf("%f inches=%fcentimeter\n",inch,inch*Inch_to_centimeter);
	return 0;
}