#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=1,num2=0;
		ans = (num1>num2&&num2)||++num1;
		printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);// 1 2 0

  }
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 7.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 1
Num1 : 2
Num2 : 0
*/
