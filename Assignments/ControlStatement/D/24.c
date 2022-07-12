/*
/*
Program 24: Write a C program to take a number as input and print
Only factorial of Even digits from that number
Input: 12345
Output: 2 : 4
4 : 24
*/

#include<stdio.h>
void main(){

  int n,rem,sum=0,fact=1;
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
    if(rem%2 == 0){
      fact =1;
      for(int i = 1;i<=rem;i++){
        fact = fact * i;
      }
      printf("Factorial of %d is %d\n",rem,fact );

    }
    sum = sum /10;
  }
  printf("\n" );
}
