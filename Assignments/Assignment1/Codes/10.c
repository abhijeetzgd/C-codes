#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=1,num2=0;
		ans = (num2>num1)==(num1||++num2);
 		printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);//0 1 0
  }

/* output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 10.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 0
Num1 : 1
Num2 : 0

*/
