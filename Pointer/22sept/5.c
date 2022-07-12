#include<stdio.h>

void main(){

   int a =10;

  int b = 20;

  const int *const iptr = &a;

  iptr = &b;

  printf("%d\n",*iptr);
}
