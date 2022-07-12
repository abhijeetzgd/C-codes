#include<stdio.h>
void main(){

  int a=10,b=0;

  b=a++;

  printf("%d %d\n",a,b);

  a=a-1;

  printf("%d %d\n",a,b);
}
/*
output
11 10
10 10
*/
