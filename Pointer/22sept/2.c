#include<stdio.h>

void main(){

   int a=10;
  const int *ptr = &a;     //pointing location is constant

  printf("%d\n",a);
  printf("%d\n",*ptr);

    a =20;
// *ptr = 20; // pointer is constant i.e

  printf("%d\n",a);
  printf("%d\n",*ptr);

}
