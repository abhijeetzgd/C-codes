#include<stdio.h>

void main(){

  double num = 10.50;
  double *numptr1,*numptr2;
  numptr1 = &num;

  printf("%f\n",num);
  printf("%f\n",*numptr1);
  *numptr1 = 11.50;

  printf("%f\n",num);


}
