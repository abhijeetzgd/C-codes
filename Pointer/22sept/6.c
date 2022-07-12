#include<stdio.h>

void main(){

  const int a =10;

   int *const iptr = &a;

  printf("%d\n",*iptr);

*iptr = 20;

  printf("%d\n",*iptr);
}
