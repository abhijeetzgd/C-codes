/*
Program 13: Write a C program to print A to Z & a to z using for
loop.
Output:

A B C D E F . . . . . .. Z
A b c d e f . . . . . . z
*/

#include<stdio.h>
void main(){
  int a,n;
  for(int i ='a';i<='z';i++){

      printf("%c  ",i);
    }

  printf("\n" );

    for(int i ='A';i<='Z';i++){

        printf("%c  ",i);
      }
  printf("\n" );
}
