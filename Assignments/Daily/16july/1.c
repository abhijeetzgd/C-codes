/*
Program 1. Write a C Program to print the sum of all even numbers and
multiplication of odd numbers ranging between 1 to n. where n is a number entered
by user.
Input: Enter N => 10
Output:
Sum of all even numbers between 1 to 10: 30
Multiplication of all odd numbers between 1 to 10: 945
*/
#include<stdio.h>
void main(){
  int n,sum=0,mul=1;
  printf("Enter value of N \n" );
  scanf("%d",&n );
  int i=1;

  while(i<=n){
    if(i%2==0){
      sum=sum+i;
    } else {
      mul=mul*i;
    }
    i++;
  }
  printf("Sum of all even numbers between 1 to %d is : %d \n",i,sum );
  printf("Multiplication of all odd numbers between 1 to %d is : %d \n",i,mul );

}
/*
Outputabhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter value of N
10
Sum of all even numbers between 1 to 11 is : 30
Multiplication of all odd numbers between 1 to 11 is : 945
*/
