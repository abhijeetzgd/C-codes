//funcion scope
#include<stdio.h>

int m=30;//global scope

void fun(int x,int y);//x y cha scope ithech sampto

void main(){

    int a =10;//local
    int b=20;//local
    //qfun(x,y);//error undeclared
    fun(a,b);
    printf("local = %d\n",a);
    printf("local = %d\n",b);
    label :
      printf("jump");

}

void fun(int p,int q){

  goto label; //label sapdat nhi karannyacha scope fuction scope asto
}
