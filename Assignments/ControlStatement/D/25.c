/*
Program 25: Write a C program to take a number as input and print
count of digits from that number
Input: 12345665
Output: Count of digits from number 12345665: 8
*/
#include<stdio.h>
void main(){

  int n,rem,sum=0,cnt=0;
  printf("Enter a number\n" );
  scanf("%d",&n );
  sum = n;
  while(n>0){
    rem = n%10;
    n = n/10;
    cnt++;
  }
printf("count of digit from %d : %d\n",sum,cnt );

}
