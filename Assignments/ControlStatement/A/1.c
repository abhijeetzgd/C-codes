/*
Program 1: Write a C program to take a number from user and print
whether it is less than 10 or greater than 10.
Input: 5
Output: 5 Is Less than 10.
*/


#include<stdio.h>
void main(){

  int n;
  printf("Enter a number " );
  scanf("%d",&n );

  if(n > 10 ){
    printf("%d is greater than 10",n );
  } else {
    printf("%d is less than 10",n );
  }
}
