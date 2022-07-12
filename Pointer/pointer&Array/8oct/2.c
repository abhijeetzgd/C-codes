#include<stdio.h>
void main(){

  int x=10;

  void *vptr = NULL;
  int *iptr = NULL;

  iptr = &x;
  vptr = &x;

  printf("%p\n",iptr);//add
  printf("%p\n",vptr);//add

  printf("%d\n",*iptr);//10
  printf("%d\n",*vptr);//10

}
