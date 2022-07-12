#include<stdio.h>
void main(){

    int num1,num2,num3,num4,ans;
    num1=45,num2=82,num3=109;
		ans = num2<<num1&4-(num3^3)&num2|2*(-156>>3);
		printf("Ans : %d\n",ans);
  }
