#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=0,num2=0;
		ans = (num1&&!num1)||!num1&&num2;
		printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);//0 0 0

  }
/* output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 14.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 0
Num1 : 0
Num2 : 0
*/
