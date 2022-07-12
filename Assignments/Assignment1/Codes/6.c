#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=5,num2=6;
		ans = (++num1&&num2++) != (--num2||num1--);
		printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);//0 6 6

}
/*output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 6.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 0
Num1 : 6
Num2 : 6

*/
