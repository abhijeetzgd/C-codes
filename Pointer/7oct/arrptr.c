#include<stdio.h>

void main(){

  int a=10,b=20,c=30;
  int *ptr1 = &a;
  int *ptr2 = &b;
  int *ptr3 = &c;

  int* parr[3]={ptr1,ptr2,ptr3};

  for(int i=0;i<3;i++){
    printf("address = %u\tvalue at that address:%d\n",parr[i],*parr[i]);
  }

}
