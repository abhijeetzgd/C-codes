//R value might be L value but l value never be R value
#include<stdio.h>
void main(){

  int x=10;
  int y=x;
  //int 10=y; it will cause error!!!
  printf("%d\n",y);
}
/*
pr1.c: In function ‘main’:
pr1.c:7:7: error: expected identifier or ‘(’ before numeric constant
   int 10=y; //it will cause error!!
   */
