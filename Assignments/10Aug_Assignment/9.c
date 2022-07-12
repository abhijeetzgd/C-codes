/*
Program 9. Write a Program to check Whether the Entered Number is Strong
Number or Not. Until User, not exit. If User Enters 'N' Then Exit The Loop.
Input/Output:
Enter Number: 124
Output: It Is Not a Strong Number
Do you want to Continue ? 'Y'
Enter Number : 145
Output : It Is a Strong Number
Do you want to continue ? 'N'
Exit The Loop.
{Note:
Strong Number: The Sum of Factorial Of Each Digit In Entered Number Is Equal
To That Number.
145: 1! + 4! + 5!
: 1 + 24 + 120
: 145
145 == 145, strong number. }
*/

#include<stdio.h>
void main(){

int rem,n,t,fact,sum;
char ch;
do{
  sum =0;
  printf("Enter the number : " );
  scanf("%d",&n );
  t = n;

  while(n>0){
    rem = n % 10;
    fact = 1;

    for(int i =1;i<=rem;i++){
          fact = fact * i;
    }

    sum = sum + fact;
    n = n/10;
  }

  if(t == sum)
    printf("%d is strong number\n",t );
  else
    printf("%d is not a Strong number\n",t );

  printf("\nDo you want to continue, press y\n" );
  scanf(" %c",&ch );
}while(ch == 'Y' || ch =='y');

printf("break \n" );
}
