#include <stdio.h>
int main (void)
{
	int number;
	int sum = 0;
	int count = 0;
	scanf("%d",&number);
	while (number != -1) {
		sum += number;
		count ++;
		scanf("%d",&number);
	}
	printf("%f\n",1.0*sum/count);
	return 0;
}
/* 其中的while循环可以改为如下
以上循环可以省去一次if的判断，那次判断是在if里头的
虽然用了两次scanf，但第一次是在循环开始前
用下面代码的话
要进行两次number!=-1的循环
do {
	scanf("%d",&number);
	if (number != -1) {
	    sum += number;
	    count ++;
	}
} while (number !=-1)