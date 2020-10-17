#include <stdio.h>
int main (void)
{
    // 初始化
    int price = 0;
    int bill = 0;
    // 读入金额和票面
    printf("请输入金额：");
    scanf("%d",&price);
    printf("请输入票面：");
    scanf("%d",&bill);
    // 计算找零
    if (bill >= price){
    	printf("应该找您：%d\n",bill - price);
    } else {
    	printf("你的钱不够\n");
    }
    return 0;
}
/* 
int a,b;
printf("请输入两个整数：");
scanf("%d %d",&a,&b);
int max = 0;
if (a>b) {
	max = a;
} else {
	max=b;
}
printf("大的那个是%d\n",max);
*/


