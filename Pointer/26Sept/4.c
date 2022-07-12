//comparing pointers

#include<stdio.h>

void main(){

  float farr[]={10.3,20.4,30.4,40.6,50.6};

  float *fptr1 = &farr[1];
  float *fptr2 = &farr[4];

  int a = fptr1 == fptr2;     //false     0

  int b = fptr1 != fptr2;       //true   1

  int d = fptr1 <= fptr2;       //true   1

  int e = fptr1 >= fptr2;       //true   1

  printf("%d\n",a);
  printf("%d\n",b);

  printf("%d\n",d);
  printf("%d\n",e);

}
