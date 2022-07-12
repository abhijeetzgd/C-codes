#include<stdio.h>
void main(){

  int a =10;

  int *iptr=NULL;

  iptr = &a;

  printf("%p\n",iptr);     //134532edr3
  printf("%d\n",*iptr);    //10

  *iptr = 13;

  printf("%p\n",iptr);     //134532edr3
  printf("%d\n",*iptr);    //10

}
