/*
Program 8: Write a C program to print table of 2 using while loop.
Output: Table of 2: 2 4 6 8 10 12 14 16 18 20
*/

#include<stdio.h>
void main(){

  int a=1,t;
  printf("Which table you want to print\n" );
  scanf("%d",&t);
  printf("Table of %d \n", t);
  while(a<=10){

    printf("%d\t",t*a );
    a++;
  }
  printf("\n" );
}
