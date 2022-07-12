//one input no return output

#include<stdio.h>

int fact(int );

void main(){

  int val,ans ;

  printf("Enter number for factorial\n");
  scanf("%d",&val);

ans=  fact(val);
printf("%d factorial = %d\n",val,ans);

}

int fact(int num){
int sum,fact=1;
  for(int i=1;i<=num;i++){
    fact = fact * i;
  }
return fact;

}
