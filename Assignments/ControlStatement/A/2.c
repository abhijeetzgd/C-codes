/*
Program 2: Write a C program to take two characters from user and
if these characters as equal then print them as it is but if they are
unequal then print their difference.
{Note: Consider Positional Difference Not ASCIIs}

Input: a p
Output: Difference between a and p is 16
*/

#include<stdio.h>
void main(){

  char a,b;

  printf("Enter two character " );
  scanf("%c %c",&a,&b);

  if(a ==  b){
    printf("Enter character are %c %c\n",a,b );
  } else {
    printf("Difference between both char %c %c are %d\n",a,b,b-a );
  }
}
