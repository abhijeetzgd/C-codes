/*
Program 7: Write a C program to print “Go to Hell” ten times using
while loop.
Output:

Go to Hell
Go to Hell
.
.
.
Go to Hell
*/
#include<stdio.h>
void main(){

  int a=10,i=1;
  printf("How many times U want to print go to hell\n" );
  scanf("%d",&a );

  while( i <= a){
    printf("Go to hell....\n" );
    i++;
  }
  printf("\n" );
}
