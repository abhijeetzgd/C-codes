#include<stdio.h>

void main(){

    int n,num,rem,sum=0;
    printf("Enter a number :" );
    scanf("%d",&num);
    n = num;

    while(n>0){
        int mul=1;
        rem = n % 10;

        for(int i=1;i<=rem;i++){

          mul = mul * i;
        }

        sum = sum + mul;

        n = n / 10;
    }
if(sum == num)
    printf("%d is strong number\n",num);
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$ ./a.out
Enter a number :145
145 is strong number
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$
*/
