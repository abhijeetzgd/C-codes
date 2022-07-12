#include<stdio.h>

int m=30;//global scope

void fun(int x,int y);

void main(){

    int a =10;//local
    int b=20;//local
    fun(a,b);

    printf("local = %d\n",a);//10
    printf("local = %d\n",b);//20
}

void fun(int p,int q){

  printf("local = %d\n",a);//error
  printf("local = %d\n",b);//error

}
