#include<stdio.h>
void main(){

  int *num = 0x700;
  *num =90;
  printf("*num = %d",*num);
}
