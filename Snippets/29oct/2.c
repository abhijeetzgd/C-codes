#include<stdio.h>

void main(){

  char far *p = (char far *)0x55550005;
  char far *q = (char far *)0x53332225;

  *p = 80;
  (*p)++;
  printf("%d",*q);
  
}
