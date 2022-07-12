/*
Program 26: Write a C program to take a number as input and print
Addition of Squares of each digit from that number.
Input: 1234
Output: Addition of squares of each digit from 1234 = 30
*/

#include<stdio.h>
void main(){

  int n,rem,sum=0;

  printf("Enter the number \n" );
  scanf("%d",&n );
  int temp = n;
  while(n>0){
    rem = n%10;
    sum = sum + rem*rem;
    n=n/10;
  }
  printf("Addition of square of each digit from %d = %d\n",temp,sum );

}
