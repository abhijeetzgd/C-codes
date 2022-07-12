#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=7,num2=4,num3=12;
		ans = num3&num1&num2;
		printf("Ans : %d\n",ans);//4

  }
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 34.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 4
*/
