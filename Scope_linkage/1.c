#include<stdio.h>

int m=30;//global scope

void fun(int x,int y);

void main(){

    int a =10;
    int b=20;
    fun(a,b);

    printf("Global = %d\n",m);
}

void fun(int p,int q){

  printf("Global = %d\n",m);

}
