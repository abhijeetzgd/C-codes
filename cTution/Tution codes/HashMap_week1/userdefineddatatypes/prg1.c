#include<stdio.h>

struct tus{

  int x;
  float y;
  char z;

};
int main(){

struct tus s;
printf("%ld\n",sizeof(s));
return 0;
}
