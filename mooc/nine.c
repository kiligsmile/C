#include <stdio.h>
int main()
{
	int number,j;
	scanf("%d",&number);
	if (number>=90)
		j=1;
	else if (number>=80)
		j=2;
	else if (number>=70)
		j=3;
	else if (number>=60)
		j=4;
	else
		j=5;
	switch (j) {
		case'1':
			printf("A");
			break;
		case'2':
			printf("B");
			break;
		case'3':
			printf("C");
			break;
		case'4':
			printf("D");
			break;
		case'5':
			printf("E");
			break;		
	}
	return 0;

}