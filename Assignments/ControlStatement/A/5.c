/*
Program 5: Write a C program to take a number from user and print
whether it is less than 0 or greater than 0 or equal to zero.
Input: 0
Output: Equal to Zero.
*/
#include<stdio.h>
void main(){

  int n;
  printf("Enter a number : " );
  scanf("%d",&n );

  if(n>0){
    printf("Number is greater than zero\n" );
  } else if(n<0){
    printf("Number is less than zero\n" );
  } else {
    printf("Number is equal to zero\n" );

  }

}
