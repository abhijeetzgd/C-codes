/*
4: Write a C program that accepts input of every data type (one of each)
from user and prints them.
Input: Enter an Integer value: 10
Output: Entered Integer Value is 10
*/
#include<stdio.h>
void main(){
  int i;
  char c;
  float f;

  printf("Enter value for Integer: ");
  scanf("%d",&i );
  printf("Enter value for Integer is:%d \n",i);

  printf("Enter value for char: ");
  scanf(" %c",&c );
  printf("Enter value for char:%c \n",c);

  printf("Enter value for Float: ");
  scanf("%f",&f );
  printf("Enter value for Float:%f \n",f);


}
