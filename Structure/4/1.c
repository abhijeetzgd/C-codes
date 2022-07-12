#include<stdio.h>

struct Arithmatic {

  int x;
  int y;

}arith = {10,20};

void add1(int x,int y){
  printf("passing each var from structure\n");
  printf("addition = %d\n\n",x+y);
}


void add2(int * x,int * y){

  printf("passing address of each var from structure\n");
  printf("addition = %d\n\n",*x + *y);
}

void add3(struct Arithmatic temp){

  printf("passing whole structure\n");
  printf("addition = %d\n\n",temp.x + temp.y);
}

void add4(struct Arithmatic *temp){

  printf("passing address of whole structure\n");
  printf("addition = %d\n\n",(*temp).x + temp->y);
}

void main(){
  add1(arith.x,arith.y);//passing value
  add2(&arith.x,&arith.y);//passing address of value
  add3(arith);//passing whole object
  add4(&arith);//passing address of object






}
