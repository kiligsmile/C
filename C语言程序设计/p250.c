// 将长度转换的宏 定义成头文件length.h,并写出主函数头文件
#define Mile_to_meter 1609
#define Foot_to_centimeter 30.48
#define Inch_to_centimeter 2.54
#include <stdio.h>
#include "length.h"
int main()
{
	float foot,inch,mile;
	printf("Input mile,foot and inch:");
	scanf("%f%f%f",&mile,&foot,&inch);
	printf("%fmiles=%fmeters\n",mile,mile*Mile_to_meter);
	printf("%f feet=%f meter\n",foot,foot*Foot_to_centimeter);
	printf("%f inches=%f centimeters\n",inch,inch*Inch_to_centimeter);
	return 0;
}