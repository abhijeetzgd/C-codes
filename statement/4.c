//Extern dorsnt give space on ram
#include "stdio.h"
void main(){
  extern int a;
  //printf("%d\n",a);
  printf("%ld\n",sizeof(a));
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/statement$ cc 3.c
4
*/
