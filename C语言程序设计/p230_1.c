#include <stdio.h>
struct student {
	int num;
	char name[10];
	int computer,english,math;
	double average;
}s,*p;
int main()
{
	p=&s;
	scanf("%d%s%d%d%d",&p->num,p->name,&p->math,&p->computer,&p->english);
	p->average=(p->math+p->computer+p->english)/3.0;
	printf("学生信息:学号:%d,姓名:%s,数学:%d,英语:%d,计算机:%d,平均分:%.2f\n",p->num,p->name,p->math,p->english,p->computer,p->average);
}