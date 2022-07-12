#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=17,num2=33,num3=42;
		ans = num1|num3&num2;
		printf("Ans : %d\n",ans);//33
  }
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 36.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 49
*/
