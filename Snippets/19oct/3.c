#include<stdio.h>

void main(){

  int num = 10;
  int *ptr1;
  void *ptr;

  ptr1 = ptr =&num;

  ptr1++;
  ptr++;

  printf("%d %d\n",*ptr1,*ptr);
}
