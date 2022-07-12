//call by value
//number get copied in anoter variable

#include<stdio.h>

void swap(int a,int b){

    a=a+b;
    b=a-b;
    a=a-b;

  printf("In swap fun %d %d\n",a,b);

}

void main(){

  int a = 10,b=5;

  printf("before swap %d %d\n",a,b);

  swap(a,b);

  printf("After swap  %d %d\n",a,b);


}
