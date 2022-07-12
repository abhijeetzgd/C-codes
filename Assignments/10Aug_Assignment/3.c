/*
Program 3: Write a Program That Take Input Integer From User, And Print First And
Last Digit From That Entered Number Using While Loop.
Input:
Enter Number: 83467
Output:
First Number: 8
Last Number: 7
*/

#include<stdio.h>
void main(){
  int n,rem,sum,a;

  printf("Enter a Number: " );
  scanf("%d",&n );
  a = n;
  while(n > 0){

    rem = n % 10;
    sum = sum * 10 + rem;
    n = n/10;
  }
  printf("First Number %d\n",sum % 10);
  printf("Second Number %d\n",a % 10);

}
