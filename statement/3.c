//Extern dorsnt give space on ram
#include "stdio.h"
void main(){
  extern int a;
  printf("%d\n",a);
  //printf("%ld\n",sizeof(a));
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/statement$ cc 3.c
/tmp/ccQBjuWl.o: In function `main':
3.c:(.text+0x6): undefined reference to `a'
collect2: error: ld returned 1 exit status
*/
