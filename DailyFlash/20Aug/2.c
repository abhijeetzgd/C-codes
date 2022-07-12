#include<stdio.h>

void main(){

  int p,t,n,r;

  printf("Enter the principle amount : ");
  scanf("%d",&p );

    printf("Enter the number of year : ");
    scanf("%d",&n );

      printf("Enter the rate of intrest : ");
      scanf("%d",&r );

  t = p*n*r/100;

  printf("Simple intrest = %d \n",t );    
}
