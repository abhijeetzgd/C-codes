#include<stdio.h>

void main(){

  int data1 = 1;
  int data2 = 2;
  const int *dataptr = &data1;

  printf("the data in dataptr1 = %d\n",*dataptr);
  dataptr = &data2;
  printf("the data in dataptr1 = %d\n",*dataptr);
  *dataptr = 10;
  printf("the data in dataptr1 = %d\n",*dataptr);
  
}
