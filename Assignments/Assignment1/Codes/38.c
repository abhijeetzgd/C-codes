#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=7,num2=33,num3=24;
		ans = num3^2>>num3/num1<<5;
		printf("Ans : %d\n",ans);
  }
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 38.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 24
*/
