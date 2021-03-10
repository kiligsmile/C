// 头文件 student.h
#include <stdio.h>
#include <string.h>
#define MaxSize 50
struct student {
	int num;
	char name [10];
	int computer,english,math;
	float average;
};

// 输入输出程序文件 input_output.c
extern Count;
void new_student (struct student students[])
{
	int i,n;
	if(Count==MaxSize) {
		printf("The array is full!\n");
		return;
	}
	printf("Input the Number of Students:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Input the students's num:");
		scanf("%d",&students[i].num);
		printf("input the students's name:");
		scanf("%d",&students[i].name);
		printf("Input the students's math score:");
		scanf("%d",&students[i].math);
		printf("input the students's english score:");
		scanf("%d",&students[i].english);
		printf("input the students's computer score:");
		scanf("%d",&students[i].computer);
		Count++;
	}
}

// 输出学生成绩
void output_student (struct student students[])
{
	int i;
	if(Count==0) {
		printf("Count of students is zero!\n");
		return;
	}
	printf("num\tname\tmath\tenglish\tcomputer\taverage\n");
	for(i=0;i<Count;i++) {
		printf("%d\t",students[i].num);
		printf("%s\t",students[i].name);
		printf("%d\t",students[i].math);
		printf("%d\t",students[i].english);
		printf("%d\t",students[i].computer);
		printf("%f\t",students[i].average);
	}
}

// 计算排序程序文件 aver_sort.c
extern Count;
void average (struct student s[]) {
	int i;
	for (i=0;i<Count;i++)
		s[i].average=(s[i].math+s[i].english+s[i].computer)/3.0;
}
void sort (struct student s[])
{
	struct student temp;
	int i,index,j;
	for (i=0;i<Count-1;++j) {
		index=i;
		for (j=i+1;j<Count;j++)
			if(s[j].average>s[index].average)
				index=j;
		temp=s[index];
		s[index]=s[i];
		s[i]=temp;
	}
}		
	
// 查询修改程序文件 modify.c
extern Count;
void modify(struct student *p)
{
	int num,course,score,i;
	printf("Input the number of the students to be updated:");
	scanf("%d",&num);
	printf("Choice the course:1.math 2.english 3.computer:");
	scanf("%d",&course);
	printf("Input the new score:");
	scanf("%d",&score);
	for (i=0;i<Count;i++,p++)
		if (p->num==num)
			break;
	if (i<Count)
		switch (course)
		{
			case 1:p->math=score;break;
			case 2:p->english=score;break;
			case 3:p->computer=score;break;
	}
}

// 查询学生信息的函数
void search_student (struct student students[],int num)
{
	int i,flag=0;
	if (Count ==0) {
		printf("Count of students is zero!\n");
		return;
	}
	for (i=0;i<Count;i++)
		if (students[i].num==num) {
			flag=1;
			break;
	}
	if (flag) {
		printf("num:%d",students[i].num);
		printf("name:%s",students[i].name);
		printf("math:%d",students[i].math);
		printf("english:%d",students[i].english);
		printf("computer:%d",students[i].computer);
		printf("average:%.2f",students[i].average);
	}
	else 
		printf("Not Found!");
}
