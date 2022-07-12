#include<stdio.h>

void main(){

  int data = 10;

  int * pointer1 = &data;
  int * pointer2 = &data;

  //*pointer1 = 20;
int division = *pointer1/ *pointer2;

}
