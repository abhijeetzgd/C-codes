/*
Q1. write a c program to print a table of number take input from user
i/p = 3
o/p = 3 6 9 12 18 21 24 27 30
*/

#include<stdio.h>
void main(){
  int a;
  printf("Enter the number\n");
  scanf("%d",&a );

  for(int i=1; i<=10; i++){
    printf("%d ",a*i);
  }
printf("\n");
}
