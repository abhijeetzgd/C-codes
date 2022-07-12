/*
Program 9: Write a C program to print table of 4 in reverse order
using while loop.
Output: Table of 4 in reverse order: 40 36 32 28 24 20 16 12 8 4
*/

#include<stdio.h>
void main(){

  int a=10,t;
  printf("Which table you want to print in reverse order\n" );
  scanf("%d",&t);
  printf("Table of %d in reverse order\n", t);
  while(a>=1){

    printf("%d\t",t*a );
    a--;
  }
  printf("\n" );
}
