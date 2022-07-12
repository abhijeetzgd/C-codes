#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=3,num2=8,num3=12,num4=17;
  	ans = (num1*3+(num2*3)*(num3/3)+num4/2);//113
  	printf("Ans : %d\n",ans);

  }

  /* output
  abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 27.c
  abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
  Ans : 113

  */
