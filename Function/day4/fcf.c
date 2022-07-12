#include<stdio.h>

void add(int x,int y){

  printf("Add = %d\n",x+y);
}

void sub(int x,int y){

  printf("Sub = %d\n",x-y);
}

void fncallindfn(int x,int y,void (*ptr)(int ,int)){

  ptr(x,y);
}

void main(){

  int a =10,b=20;

  fncallindfn(a,b,add);
  fncallindfn(a,b,sub);

}
