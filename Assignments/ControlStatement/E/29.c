/*Program 29: Write a C program to print the series of
Armstrong number.
{Note: Armstrong number is that whose digit’s cubical addition is eq
to that number
153 is Armstrong number = 1 + 125 + 27 = 153}
Input: 1 to 2000
Output: 153 ....
*/

#include<stdio.h>
void main(){

  int n,t,m,rem,sum;
  printf("Enter the range \n" );
  scanf("%d %d",&n,&m );
  t=n;
  printf("Armstrong number from given range are \n" );
  do{
    sum =0;
    while(n>0){
      rem = n%10;
      sum = sum + rem*rem*rem;
      n = n/10;
    }
if(sum == t){
  printf("%d\t",t );
}
    n=++t;
  }while(t!=m);
  printf("\n" );
}
