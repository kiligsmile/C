/*
请定义下列宏定义：
1.MIN(a,b)  // 求a,b的最小值
2.ISLOWER(c)  // 判断c是否为小写字母
3.ISLEAP（y）  // 判断y是否为闰年
4.CIRFER（r)   // 计算半径为r的圆周长
*/
#define MIN(a,b) (a)<(b)?(a):(b)

#define ISLOWER(c)  ((c)>='a'&&((c)<='z'))

#define ISLEAP(y)  (((y)%4==0&&(y)%100!=0)||((y)%400)==0)

#define PI 3.14159
#define CIRFER(r) 2*PI*(r);