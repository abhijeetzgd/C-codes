#include<stdio.h>

void add(float x,float y){

  printf("%f\n",x+y);
}

void sub(float x,float y){

  printf("%f\n",x-y);
}

void main(){

  void (*fptr)(int,int);

  fptr = add;

  fptr(10.9f,20.9f);

  fptr = sub;

  fptr(10.9f,20.9f);

}
