// 分别用函数和带参宏实现从三个数中找出最大数，请比较两者在形式上和使用上的区别

// 函数使用
int max(int x,int y,int z)
{
	int t;
	if(x>=y){
		if(x>=z){
			t=x;
		}
		else {
			t=z;
		}
	}
	else {
		if(y>=z){
			t=y;
		}
		else {
			t=z;
		}
	}
	return t;
}

// 宏实现
#define MAX(x,y,z) x>=y?(x>=z?x:z):(y>=z?y:z)

/*两者在定义形式上完全不同。使用函数在执行时，从主调函数转到函数max（），然后再返回到主调函数，
函数数体始终存在；而宏是在编译预处理时，用条件表达式去替换MAX(int x,int y,int z),等程序执行时；
执行的是条件表达式，而不再存在MAX（int x,int y,int z)的式子*/