/*
Program 19: Write a C program that has a variable of integer type declare a pointer to that
variable, assign a value to that variable using pointer, and take value from user.
Input: 10
Output:
Value at variable: 10
Value by dereferencing pointer 10

*/

#include<stdio.h>
void main(){

  int a;
  int *iptr = &a;

  printf("Enter a number ");
  scanf("%d",&a);

printf("%d",*iptr);
}
