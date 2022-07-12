#include<stdio.h>

int main(){

  int n=0,a=16,b=0;
  while( n<=~(~a )){
    n++;
}
a=n;
printf("%d\n",~a );
    return 0;
  }
