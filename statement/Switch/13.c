#include<stdio.h>
void main(){
  char c='d';

  switch(c) {
      default:
      printf("default case\n");
      break;

      case 'a':
      printf("case - a\n");
      break;

      case 'b':
      printf("case - a\n");
      break;

      case 'D':
      printf("case - a\n");
      break;


  }
  printf("OutofSwitch\n" );
}
