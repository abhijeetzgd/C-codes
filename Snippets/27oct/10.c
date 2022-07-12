#include<stdio.h>
void main(){

  int data1 = 1,data2 = 2;
  int * const dataptr = &data1;

  printf("%d\n",*dataptr);
  dataptr = &data2;

  printf("%d\n",*dataptr);
  *dataptr = 10;

  printf("%d\n",*dataptr);

}
