#include<stdio.h>

void main(){

  int a = 10,b=5;

  printf("before swap %d %d\n",a,b);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("after swap %d %d\n",a,b);
}
