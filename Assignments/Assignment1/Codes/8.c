#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=1,num2=1;
		ans = num2!=(++num1||++num2);//or part does get execute if it got 1 on lhs
		printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);//0 2 2

}
/*
output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 8.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 0
Num1 : 2
Num2 : 1

*/
