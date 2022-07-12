/*Program 27: Write a C program to take a number as input and pri
Addition of Factorials of each digit from that number.
Input: 1234
Output: Addition of factorials of each digit from 1234 = 33
*/

#include<stdio.h>
void main(){

  int n,rem,fact=1,sum=0,t;
  printf("Enter a number : " );
  scanf("%d",&n );
  t=n;
  while(n>0){
      rem = n%10;
      fact = 1;
      for(int i = 1; i<=rem;i++){
          fact = fact * i;
      }
    sum = sum + fact;
    n=n/10;
  }
printf("Addition of factorial of each digit from %d = %d\n",t,sum );

}
