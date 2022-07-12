#include<stdio.h>

void main(){

  int x=10;;
  float y = 20.5;

  void *vptr=NULL;
  printf("%ld\n",sizeof(vptr));

  vptr = &x;
  printf("%d\n",*(int*)vptr);

}
