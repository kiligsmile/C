/* 猜数字游戏
输入格式：输入一行中给定2个不超过100的正整数，分别是系统产生的随机数、
以及猜测的最大次数N，随后每行给出一个用户的输入，直到出现负数为止
输出格式：在一行中输出每次猜测相应的结果，直到输出猜对的结果或“game over”则结束
*/
#include <stdio.h>
int main()
{
	int number,n;
	int inp;
	int finished = 0;
	int cnt = 0;
	scanf("%d %d",&number,&n);
	do{
		scanf("%d",&inp);
		cnt++;
		if ( inp<0 ) {
			printf("Game Over\n");
			finished=1;
		} else if ( inp>number ) {
			printf("Too big\n");
		} else if (inp<number) {
			printf("Too small\n");
		} else {
			if (cnt ==1) {
				printf("Bingo!\n");
			} else if (cnt <=3) {
				printf("Lucky You!\n");
			} else {
				printf("Good GUess!\n");
			}
			finished =1;
		}
		if ( cnt==n ) {
			if ( !finished ) {
				printf("Game Over\n");
				finished =1;
			}	
		}
	} while (!finished);
	return 0;
}