/*
Program 5: Write a C program that accepts two numbers from the user and prints
the average of those two number.
Input: 10 20
Output: Average of 10 & 20 is\ 15
*/

#include<stdio.h>
void main(void){
  int a,b,avg;
  printf("Enter two numbers : ");
  scanf("%d %d",&a,&b );
  printf("average of %d & %d is %d \n",a,b,(a+b)/2 );

}
