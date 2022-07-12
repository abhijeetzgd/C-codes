/*
Program 26: Write a C program to take a number as input and pri
Series of palindrome numbers ranging upto that number from hundr
{Note: Take input above from 100}
Input: 200
Output:
101
111
.
.191
*/

#include<stdio.h>
void main(){

  int n,m,rem,fact=1,sum=0,t;
  printf("Enter a number : " );
  scanf("%d",&m );

  n=100;
  int cnt = 100;
  do{
    sum = 0;
    while(n>0){

      rem = n % 10;
      sum = sum*10 + rem;
      n = n/10;
    }
if(cnt==sum){
  printf("%d\n",cnt );
}

    n = ++cnt;
  }while(cnt!=m);
}
