#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=4,num2=7,num3=2;
		ans = num1|num3&num2;
		printf("Ans : %d\n",ans);
  }
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 35.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 6
*/
