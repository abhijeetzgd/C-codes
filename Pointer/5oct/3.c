#include<stdio.h>

void main(){

  int x=10;
  int *ptr = &x;
  int **pptr = &ptr;

  printf("%d\n",x);
  printf("%d\n",*ptr);//100
  printf("%d\n",**pptr);//error

printf("%p\n",*pptr);


}
