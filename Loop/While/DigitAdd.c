#include<stdio.h>
void main(){
  int sum=0,num=0,rem=0;
  printf("Enter a number : " );
  scanf("%d",&num );

  while(num != 0){

    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
  }
  printf("Sum = %d \n",sum );
}
