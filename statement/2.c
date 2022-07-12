//Extern dorsnt give space on ram
#include "stdio.h"
void main(){
  int a;
  printf("%d\n",a);
  printf("%ld\n",sizeof(a));
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/statement$ cc 2.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/statement$ ./a.out
0
4
*/
