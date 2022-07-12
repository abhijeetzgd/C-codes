#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=8,num2=35,num3=22;
		ans = num2&num1*4+(num3>>3)|num2/2;
		printf("Ans : %d\n",ans);//51
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 39.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 51
*/
