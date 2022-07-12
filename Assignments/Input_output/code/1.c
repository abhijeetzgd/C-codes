/*
Program 1: Write a C program that takes the radius of a circle as input from the user,
and calculates it’s Area and Circumference.
Input: Radius: 4
Output:
Area of Circle: 50.24
Circumference of Circle: 25.12
*/
#include<stdio.h>
void main(){
  int r;
  printf("Enter radius of circle\n" );
  scanf("%d",&r );

  printf("Area of Circle: %f \n",3.14*r*r );
  printf("Circumference of circle: %f \n",2*3.14*r);
}
