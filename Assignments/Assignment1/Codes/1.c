#include<stdio.h>
void main(){

int num1,num2,num3,num4,ans;
num1=1,num2=0;
ans = ((num1&&num2)&&num1);
/*
    = ((1&&0)&&1)
    = (0&&1)
ans = 0
*/
printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);//0 1 0

}
