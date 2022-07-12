/*
Q12. Write a c program to take two numbers from user and
print sum of even numbers and multiplication of odd numbers ranging between those
two input numbers.
Input: 10 20
Output: sum of even numbers:90
multiplication of odd numbers=75
*/

#include<stdio.h>
void main(){
  int a,b,sum=0,mul=1;
  printf("Enter two numbers\n" );
  scanf("%d %d",&a,&b );

  for(int i=a;i<=b;i++){
    if(i%2==0){
      sum = sum + i;
    } else {
      mul = mul * i;
    }
  }
  printf("sum of even numbers : %d\n",sum );
  printf("mul of odd numbers : %d\n",mul );

}
