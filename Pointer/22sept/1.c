#include<stdio.h>

void main(){

  const int a=10;
  int *ptr = &a;
  printf("%d\n",a);
  
  *ptr = 20;

  printf("%d\n",a);
}
