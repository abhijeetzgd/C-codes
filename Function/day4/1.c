#include<stdio.h>

void add(int x,int y){

  printf("%d\n",x+y);
}

void sub(int x,int y){

  printf("%d\n",x-y);
}

void main(){

  void (*fptr)(int,int);

  fptr = add;

  fptr(10,20);

  fptr = sub;

  fptr(10,20);

}
