/*
Program 20: Write a C program to take two numbers as input and
print addition of even numbers and multiplication of odd numbers
ranging between those two input numbers.
Input: 1 10
Output:

Addition of Even Numbers: 32
Multiplication of Odd Numbers: 945
*/

#include<stdio.h>
void main(){

  int a,n,sum=0,mul=1;
  printf("Enter the range\n" );
  scanf("%d %d",&a,&n );

  for(int i=a;i<=n;i++){

    if(i%2==0){
      sum = sum + i;
    } else {
      mul = mul * i;
    }
  }
  printf("Addition of even number : %d\nMultiplication of Odd number : %d\n",sum,mul );
}
