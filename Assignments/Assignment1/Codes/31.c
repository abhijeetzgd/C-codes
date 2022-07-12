#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=3,num2=4,num3=2;
		ans = 10+(num3<<num1)*3/8;
		printf("Ans : %d\n",ans);//16
}
/* output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 31.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 16

*/
