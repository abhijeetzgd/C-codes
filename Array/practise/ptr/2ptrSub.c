#include<stdio.h>
void main(){

  printf("For integer \n");
  int  a[]={1,2,3,4,5,6,7};
  printf("address of first element =%p\naddress of first element =%p\ndifference of first and second =%p\n",&a[0],&a[1],&a[4]-&a[0]);

  printf("For character \n");
  int c[]={'a','b','c','d','e'};
  printf("address of first element =%p\naddress of first element =%p\ndifference of first and second =%p\n",&c[0],&c[1],&c[2]-&c[4]);

  printf("Addition of two ptrs : %p\n",&a[0]%1);
}
