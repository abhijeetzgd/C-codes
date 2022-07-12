#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=5,num2=4;
		ans = (num1<num2||num1++) && (++num1&&num1<num2);
		printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);//0 7 4
}
/*Output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ cc 5.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 0
Num1 : 7
Num2 : 4
*/
