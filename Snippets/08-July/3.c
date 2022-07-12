#include<stdio.h>
void main(){

  int i = -30,j = 20,k=1,m;
  m= ++i && ++j && --k;
  printf("%d %d %d %d\n",i,j,k,m );
}
