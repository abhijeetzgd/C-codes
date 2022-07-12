#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=3,num2=4;
		ans = num1<<num2++;
		printf("Ans : %d\n",ans);

  }
/* output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 29.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 48
*/
