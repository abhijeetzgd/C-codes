#include<stdio.h>
#include<stdlib.h>
void add(int x,int y){
  printf("add= %d\n",x+y);
}

void sub(int x,int y){
  printf("sub =%d\n",x-y);
}
void mul(int x,int y){
  printf("mul=%d\n",x*y);
}
void dive(int x,int y){
  printf("div=%d\n",x/y);
}

void main(){

  void (*arrptr[4])(int ,int) = {add,sub,mul,dive};

  int ch,a,b;

  printf("Enter your choice\n");
  printf("0. Add\n1.Sub\n2.Mul\n3.Div\n");
  scanf("%d",&ch);
  printf("Enter values for a&b : ");
  scanf("%d%d",&a,&b);

  if(ch<0 ||ch>3)
  {
    printf("Wrong choice\n");
    exit(0);
  }else{
    arrptr[ch](a,b);
  }
}
