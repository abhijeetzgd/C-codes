#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=8,num2=10,num3=12,num4=8;
		ans = num1*num3+(num4/4)/num1-(++num2);
		printf("Ans : %d\n",ans);//85
  }
/* output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 85
*/  
