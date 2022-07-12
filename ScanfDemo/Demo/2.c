#include "stdio.h"
void main(){

  int x;
  float f;
  char ch;

  printf("Enter value for int \n" );//10
  scanf("%d",&x);

  printf("Enter value for float\n" );//10.67
  scanf("%f",&f);
  getchar();
  printf("Enter value for char\n" );//A
  scanf("%c",&ch);

  printf("Int val = %d\n",x);//10
  printf("Float val = %f\n",f);//10.67
  printf("Char val = %c\n",ch);//A



}
