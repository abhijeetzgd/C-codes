/*
Program 30: Write a C program to print the series of
Strong number.
{Note: Strong number is that whose digit’s factorial’s addition is equ
to that number
145 is Strong number = 1 + 24 + 120 = 145}
Input: 1 to 2000
Output: 145 ....
*/

#include<stdio.h>
void main(){

  int n,t,m,rem,sum,fact;
  printf("Enter the range \n" );
  scanf("%d %d",&n,&m );
  t=n;
  printf("Strong number from given range are \n" );
  do{
    sum =0;
    while(n>0){
      rem = n%10;
      fact =1;

      for(int i=1; i<=rem;i++){
        fact = fact * i;
      }
      sum = sum + fact;
      n = n/10;
      //printf("%d: \tfact = %d ,\tsum = %d\n",t,fact,sum );

    }

if(sum == t){
  printf("%d\t",t );
}
    n = ++t;

  }while(t!=m);
  printf("\n" );
}
