/*
Program 10. Write a Program to check Whether the Entered Number is Perfect
Number or Not until User not exit. If User Enters 'N' Then Exit The Loop.
Enter Number: 6
Output:
6 is perfect Number
Do you want to Continue? 'Y'
Enter Number: 12
Output :
12 is not perfect Number
Do you want to continue ? 'N'
Exit The Loop.
{Note:
Perfect Number: The Sum of Divisor Of Entered Number Is Equal To That
Number.
6: 1 + 2 + 3 = 6
6 == 6, perfect number}
*/

#include<stdio.h>
void main(){

  int sum,n;
  char y;

do{
  printf("Enter the Number : " );
  scanf("%d",&n );
sum =0;
  for(int i = 1; i<=n/2+1;i++){
    if(n % i == 0){
      sum = sum + i;
    }
  }
//  printf("\n n = %d\nsum = %d\n",n,sum );
if(sum == n)
  printf("%d is a Perfect Number\n",n );
else
  printf("%d is not perfect number\n",n );

  printf("\nDo you want to Continue\nPress y : \n" );
  scanf(" %c",&y );
}while(y == 'Y' || y == 'y');
}
