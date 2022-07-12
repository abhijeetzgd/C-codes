#include<stdio.h>
void sub(int a ,int b){

  printf("sub = %d\n",a-b );
}

void add(int a,int b){

  printf("add = %d\n",a+b);
}
void main(){

  int a=10,b=5;

  void (*fptr1)(int ,int);
  fptr1 = sub;

  fptr1(a,b);//calling function ptr

  sub(10,5);//calling with name

  void (*fptr2)(int ,int);
  fptr1 = add;
  fptr2 = add;
  add(10,20);
  fptr2(a,b);

}
