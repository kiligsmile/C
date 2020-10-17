# include<stdio.h>
int main (void)
{
	int a,b,c,d,e;
	scanf ("%d %d %d",&a,&b,&c);
	d=(a>b)?a:b;
	e=(d>c)?d:c;
	printf("%d \n",e);
	return 0;
}

