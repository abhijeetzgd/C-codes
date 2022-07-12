#include<stdio.h>

void main(){

  int x=10;
  int *ptr = &x;
  int **pptr = &ptr;

  printf("%d\n",*ptr);//100
  printf("%d\n",**pptr);//200
  printf("%d\n",x);


}
