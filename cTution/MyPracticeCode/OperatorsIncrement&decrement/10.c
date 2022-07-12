#include<stdio.h>
void main(){
  int a=12,b=14;
  b = b++ + b++ + ++b + b++;

  printf("%d \n",b);//63

  a= ++a + ++a + a++ + ++a;
  printf("%d \n",a);//58
}
