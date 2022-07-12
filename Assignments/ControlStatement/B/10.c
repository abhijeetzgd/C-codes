/*
Program 10: Write a C program to print Squares of numbers ranging
from 1 to 15.
Output:

Square of 1: 1

Square of 2: 4
.
.
.
Square of 15: 225
*/

#include<stdio.h>
void main(){

  int a=10,t1,t2;
  printf("Enter a range for Squares\n" );
  scanf("%d %d",&t1,&t2);

  while(t1<=t2){

    printf("Square of %d: %d\n",t1,t1*t1 );
    t1++;
  }
  printf("\n" );
}
