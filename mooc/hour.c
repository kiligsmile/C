#include<stdio.h>
int main (void)
{
	int hour1,minute1;
    int hour2,minute2;
    int t1=hour1*60.0+minute1;
    int t2=hour2*60.0+minute2;
    double t=t2-t1;
    scanf（"%d %d",&hour1,&minute1）;
    scanf（"%d %d",&hour1,&minute2）;
    printf("时间差是%lf小时%lf分。",t/60,t%60);
    return 0;
}

