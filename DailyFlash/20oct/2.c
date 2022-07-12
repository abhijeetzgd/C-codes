#include<stdio.h>
int Factorial(int n){
  int fact=1;

  for(int i=1;i<=n;i++){
    fact =  fact * i;
  }

  return fact;
}

void main(){

  int n,fact;
  printf("Enter a number\n");
  scanf("%d",&n);
  fact = Factorial(n);
  printf("factorail of %d is = %d\n",n,fact );
}
