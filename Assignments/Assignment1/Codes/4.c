#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=2,num2=3;
		ans = (++num1-num2++) && (--num1-num2);
		printf("Ans : %d\nNum1 : %d\nNum2 : %d\n",ans,num1,num2);//0 3 4

}
/* output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignment$ ./a.out
Ans : 0
Num1 : 3
Num2 : 4
*/
