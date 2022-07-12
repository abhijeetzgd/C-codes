#include<stdio.h>

void main(){
  int i =100;
  int *p;
  p = &i;
  printf("%u %u",*&p,&*p);
}
