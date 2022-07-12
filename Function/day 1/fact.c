//one input no return output

#include<stdio.h>

void fact(int );

void main(){

  int val ;

  printf("Enter number for factorial\n");
  scanf("%d",&val);

  fact(val);
}

void fact(int num){
int sum,fact=1;
  for(int i=1;i<=num;i++){
    fact = fact * i;
  }
  printf("%d factorial = %d\n",num,fact);
}
