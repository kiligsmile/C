// 参考例9_2，输入并保存10个学生的成绩信息，分别输出平均成绩最高和最低的学生的信息
#include <stdio.h>
struct student {
	int num;
	char name[10];
	int computer,english,math;
	double average;
};
struct student s[3];
int main()
{
	/*输入十个学生的信息*/
	int i,max,min;
	for(i=0;i<3;i++){
		printf("No.%d:",i+1);
		scanf("%d%s%d%d%d",&s[i].num,s[i].name,&s[i].computer,&s[i].english,&s[i].math);
		s[i].average=(s[i].math+s[i].computer+s[i].english)/3.0;  //注意此处需要除以3.0,不然输出结果为.00;
	}
	// 查找平均成绩最高、最低的学生的数组下标
	max=min=0;
	for(i=0;i<3;i++){
		if(s[i].average>s[max].average){
			max=i;
		}
		if(s[i].average<s[min].average){
			min=i;
		}
	}
	/*输出平均成绩最高和最低的学生信息*/
	printf("平均分成绩最高学生信息:学号:%d,姓名:%s,数学:%d,英语:%d,计算机:%d,平均分:%.2lf\n",s[max].num,s[max].name,s[max].math,s[max].english,s[max].computer,s[max].average);
	printf("平均分成绩最低学生信息:学号:%d,姓名:%s,数学:%d,英语:%d,计算机:%d,平均分:%.2lf\n",s[min].num,s[min].name,s[min].math,s[min].english,s[min].computer,s[min].average);
	return 0;

}