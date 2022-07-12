#include<stdio.h>
void main(){

  int a=10,b=20;
  int *aptr =&a,*bptr = &b;

  printf("addition of a & b = %d\n",*aptr+*bptr);
  printf("subtraction of a & b = %d\n",*aptr - *bptr);
  printf("Multiplication of a & b = %d\n",*aptr * *bptr);
  printf("Division of a & b = %d\n",*aptr/(*bptr));

}
