#include<stdio.h>

void main(){

  int a=10;
  int *iptr = &a;
  printf("%d\n",a);
  printf("%d\n",iptr);
  printf("%p\n",iptr);
  printf("%u\n",iptr);
  printf("%p\n",&a);


}
