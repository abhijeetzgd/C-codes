#include<stdio.h>

void main(){

  int i = 3;
  int *j ;
  int **k;

  j = &i;
  k =&j;

  printf("%u %u %d",k,*k,**k);
}
