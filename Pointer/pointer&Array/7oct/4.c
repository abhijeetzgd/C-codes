#include<stdio.h>

void main(){

  char carr[]={'a','b','c','d','e'};

  char *cptr = carr;
  int *iptr = carr;

  printf("%c\n",*cptr );      //a
  printf("%c\n",*iptr );      //a
  printf("%p\n",cptr );         //300
  printf("%p\n",iptr );         //300

cptr = cptr+1;
iptr = iptr + 1;

printf("%c\n",*cptr );      //b
printf("%c\n",*iptr );      //e

}
