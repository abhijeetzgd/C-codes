#include<stdio.h>
void main(){

  int a =10,b=20;

  int *iptr=NULL;

  iptr = &a;

  printf("%p\n",iptr);     //134532edr3
  printf("%d\n",*iptr);    //10

  iptr = &b;

  printf("%p\n",iptr);     //134532edr3
  printf("%d\n",*iptr);    //20

}
