#include <stdio.h>
int main()
{
	char c;
	int letter,digit,blank,other;
	letter=digit=blank=other=0;
	while((c=getchar())!='\n') {
		if ((c>='a'&&c<='z') || (c>='A' && c<='Z'))
			letter++;
		else if (c>='0' && c<='9')
			digit++;
	    else if (c==' ')
	    	blank++;
	    else
	    	other++;
	}
	printf("%d %d %d %d",letter,digit,blank,other);
	return 0;

}