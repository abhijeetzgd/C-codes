#include<stdio.h>

void main(){

  int a=10;
  int b=20;
  int *ptr=&a;

  printf("%d\n",*ptr);

  int *ansptr=ptr + 1;

  printf("%d\n",*ansptr);
ptr ++;
  printf("%d\n",*ptr);

}
