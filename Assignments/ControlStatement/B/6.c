/*
Program 6: Write a C program to take a number from user and print
that number decrementing by one unless it becomes zero.
Input: 6

Output: 6 5 4 3 2 1
*/

#include<stdio.h>
void main(){

  int n;
  printf("Enter a number : " );
  scanf("%d",&n );

  while(n>0){
    printf("%d \t",n );
    n--;
  }
printf("\n" );
}
