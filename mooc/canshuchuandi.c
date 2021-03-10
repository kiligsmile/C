#include <stdio.h>
void cheer(int i)
{
	printf("cheer %d\n",i);
}
int main()
{
	double f = 2.4;
	cheer(f);
	cheer(2.9);
	return 0;
}