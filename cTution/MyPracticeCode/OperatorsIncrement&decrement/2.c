#include<stdio.h>
void main(){

  int a=10,b=0;

  a++=b;

  printf("%d %d\n",a,b);

  a=a-1;

  printf("%d %d\n",a,b);

}
/*
2.c: In function ‘main’:
2.c:6:6: error: lvalue required as left operand of assignment
   a++=b;
      ^
*/
