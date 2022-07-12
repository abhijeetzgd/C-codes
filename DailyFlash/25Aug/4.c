#include<stdio.h>
void main(){

  int n,sum=0;
  printf("Enter a integer : ");
  scanf("%d",&n );

  for(int i=0;i<=n;i++){

    sum = sum + i;
  }
  int avg = sum /n;
  printf("Average of first %d numberis %d\n",n,avg );
}
