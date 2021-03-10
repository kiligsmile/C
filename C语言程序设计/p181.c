// 获取密码的两种方式
// 既可以通过变量名x直接得到密码值
// 也可以在不知道变量名的情况下，通过指针变量p所存放的x的地址间接找到密码值
#include <stdio.h>
int main()
{
	int x=5342;
	int*p=NULL;
	p=&x;
	printf("If I know the name of the Variable,I can get it's value by name:%d\n",x);
	printf("If I know the address of the variable is:%x,then I also can get it's value by address:%d\n",p,*p);
	return 0;
}