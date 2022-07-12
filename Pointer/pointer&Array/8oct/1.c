#include<stdio.h>
void main(){

  int x=10;

  void *vptr = NULL;

  vptr = &x;

  printf("%p\n",vptr);
}
