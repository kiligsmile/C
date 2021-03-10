#include <stdio.h>
int main(void)
{
int n,a,b;
printf("input n:"),
scanf("%d",&n);
b=n%10;
a=n/10;
n=b*10+a;
printf("%d\n",n);
return 0;
}