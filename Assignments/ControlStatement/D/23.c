/*
Program 23: Write a C program to take a number as input and print
only Odd digits from that number
Input: 123456
Output: Odd digits from number 123456: 1 3 5
*/
#include<stdio.h>
void main(){

  int n,rem,sum=0;
  printf("Enter a number\n" );
  scanf("%d",&n );

  while(n>0){
    rem = n%10;
    sum = sum*10 + rem;
    n = n/10;
  }
//  printf("%d\n",sum );

  while(sum>0){
    rem = sum % 10;
    if(rem % 2!=0){
      printf("%d\t",rem );
    }
    sum = sum /10;
  }printf("\n" );
}
