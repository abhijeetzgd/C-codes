#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=1,num2=2,num3=6;
		ans = num1*2<<num3+(num2/2)*3;
		printf("Ans : %d\n",ans);
  }
/*abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 37.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 1024
*/
