#include<stdio.h>
int main(){
  float a = 5.2;
  switch((int)a){//typecasting
    case 1:
      printf("one\n");
      break;

    case 5:
      printf("five\n");
      break;

    case 2:
      printf("two\n");
      break;

    default:
    printf("else\n");
    break;
}
}//missing
/*

Explanation-
here we declare a as float .
but because of this line
switch((int) a)
it is treated like int so it goes to case 5
and execute it.
*/
