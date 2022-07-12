/*
Program 5
*/

#include<stdio.h>
void main(){

int row,a=0,b=1,sum=0,temp;
printf("Enter the number of row and col\n" );
scanf("%d",&row );

for(int i =1 ; i<=row ; i++){

  for(int j = 1; j<=i ; j++){

      printf("%d   ",a);
      temp = a;
      a = a+b;

      b = temp;
  }
  printf("\n" );
}
}
