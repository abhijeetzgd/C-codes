/*
Program 1. Write a C Program to take a number as input from user and print sum of
all natural numbers from 1 to up to that number.
Input: Enter a Number: 10
Output: The Sum of all natural number between 1 to 10 is: 55
*/

#include<stdio.h>
void main(void){
  int a,sum=0;
  printf("Enter A number : " );
  scanf("%d",&a );
  while(a>0){
    sum = sum + a;
    a--;
  }
  printf("sum of all number from  1 to %d is : %d\n",a,sum );
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter A number : 10
sum of all number from  1 to 0 is : 55
*/
