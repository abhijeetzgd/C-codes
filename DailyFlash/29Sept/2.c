#include<stdio.h>
void main(){

  char a = 'a';
  char b = 'b';

  char *ptra = &a;
  char *ptrb = &b;

  ptra=ptra + 1;
  /*
  ptr = ptr + 1*datatype
  there fore now it will point to place where ptrb is pointing
  */
  printf("%c",*ptra);//b


}

/*
as we know variable a & b get position next to each other
*/
