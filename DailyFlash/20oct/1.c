#include<stdio.h>

void isArmstrong(int n){
  int sum=0,rem=0;
  int m = n;
  while(n>0){
    rem = n%10;
    sum = sum + rem*rem*rem;
    n=n/10;
  }
  if(m == sum){

    printf("%d is arm strong number\n",m);
  }else{

    printf("%d is not an arm strong number\n",m);
  }
}

void main(){

  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  isArmstrong(n);
}
