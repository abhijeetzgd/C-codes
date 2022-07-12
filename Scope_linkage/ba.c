#include<stdio.h>

void fun(int a,int b){
  extern int x;
printf("add = %d",a+b);//30
printf("x = %d",x);
}
