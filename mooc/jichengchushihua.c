//在一组给定的数据中，如何找出某个数据是否存在？
int search(int key, int a[], int length);
int main(void)
{
	int a[13] = {[1]=2,4,[5]=6};
	//int a[13] ={2,4,6,7,1,3,5,9,11,13,23,14,32};
	{
		int i;
		printf("%lu\n",sizeof(a));
		printf("%lu\n",sizeof(a[0]));
		for ( i=0; i<sizeof(a)/sizeof(a[0]); i++) {
			printf("%d\t",a[i]);
		}
		printf("\n");
	}

	int x;
	int loc;
	printf("请输入一个数字： ");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if ( loc != -1 ) {
		printf("%d在第%d个位置上\n",x,loc);
	} else {
		printf("%d不存在\n",x);
	}
	return 0;
}


int search(int key,int a[],int length)
{
	int ret = -1;
	int i;
	for (i=0; i<length; i++) {
		if ( a[i] == key) {
			ret = i;
			break;
		}
	}
	return 0;
}
