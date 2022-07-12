#include<stdio.h>
void main(){
  int n;
  printf("Enter Number for printing Table\n");
  scanf("%d",&n);
  printf("Table of %d is as: \n",n);

  for(int i=1;i<=10;i++){

    printf("%d ",n*i);
  }printf("\n");
}
