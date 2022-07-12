/*
Program 3: Write a C program to take a number from user and print
whether it is Even or Odd.
Input: 5
Output: 5 Is Odd Number.
*/

#include<stdio.h>
void main(){

  int n;
  printf("Eter thye number : " );
  scanf("%d",&n );
  if(n%2 == 0){
    printf("%d is even number \n",n );
  } else {
    printf("%d is odd number \n",n );
    }
}
