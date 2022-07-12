/*
Program 1: Write a C Program that accepts two double variables from user and print
only 2 precision. Moreover, do all arithmetic operation on them.
Input:
First Double value: 12.745
Second Double Value: 10.2229
Output:
The Entered Number up to second precision are: 12.74 & 10.22
Their Addition: 22.96
Their Multiplication: 130.20
Their Subtraction: 2.52
Their division: 1.24
*/

#include<stdio.h>
void main(){
  double a,b;
  printf("First Double value: " );
  scanf("%lf",&a);
  printf("Second Double value: " );
  scanf("%lf",&b);
  printf("The Entered Number upto second precision are: %.2f & %.2f\n",a,b );
  printf("Their Addition: %.2lf\n",a+b );
  printf("Their subtraction: %.2lf\n",a-b );
  printf("Their Multiplication: %.2lf\n",a*b );
  printf("Their division: %.2lf\n",a/b );

}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$ cc 1.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$ ./a.out
First Double value: 20
Second Double value: 10
The Entered Number upto second precision are: 20.00 & 10.00
Their Addition: 30.00
Their subtraction: 10.00
Their Multiplication: 200.00
Their division: 2.00
*/
