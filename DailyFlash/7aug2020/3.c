/*
accept anumber from user ,print it decremently till 0
*/
#include<stdio.h>
void main(){


  int n=0;

  printf("Enter a number : " );
  scanf("%d",&n );

do{
printf("%d\t",n );
  n--;
}while(n!=-1);
printf("\n" );
}
