#include<stdio.h>
void main(){

  int a=10,b=20;

  int *ptr  = & a;

  printf("%p\n",& a);
  printf("%p\n",& b);
  printf("%p\n",& ptr);

}
