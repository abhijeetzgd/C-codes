#include<stdio.h>
void main(){

  int n;
  printf("Enter a number ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++){

    printf("Square of %d = %d\n",i,i*i);
  }
}
