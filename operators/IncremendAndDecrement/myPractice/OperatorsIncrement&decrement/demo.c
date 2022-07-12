#include<stdio.h>
void main(){

  int a=10,b=4;

//  a=++a +a /b++ + ++a * ++b;
a=++b * ++a + (a/b++) + ++a;//69 6
  printf("%d %d\n",a,b);
}
