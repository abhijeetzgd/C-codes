#include<stdio.h>

void main(){

  int data1 = 10;
  int *dataptr1 = &data1;
  int data2 = 20,*dataptr2;
  dataptr2 = &data2;

  printf("the data in dataptr1 = %d\n",*dataptr1);
  printf("the data in dataptr1 = %d\n",*dataptr2);

}
