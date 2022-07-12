#include<stdio.h>
void main(){
  char a='A';
  printf("%d\n",a);
  a=a++ + ++a;
  printf("%d",a);
}
