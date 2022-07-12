#include<stdio.h>

void main(){

   int a=10;
  const int *ptr = &a;     //pointing location is constant

  printf("%d\n",a);
  printf("%d\n",*ptr);

 *ptr = 20; // 

  printf("%d\n",a);
  printf("%d\n",*ptr);

}
