#include<stdio.h>

void fun(int* ,int*);

void main(){

  int a =10;
  int b =2;
  int arr[5]={30,40,50,60,70}; //consider starting address as 100

  int *pa = &a; //address of a is copied in *pa;
  int *pb = &b;//address of b is copied in *pb;
  //array name is itself address of first element
  int *ptr = arr;// it is stored in *ptr pointer variable

  fun(arr,ptr); //passing array and its address

  printf("Value : %d\n",*pa / *pb); //5

}

void fun(int *arr,int *ptr){

  ++*ptr;//it will increment value at that function
  printf("Address %p\tvalue:%d\n",ptr,*ptr);//100   31

  *ptr++;//it will first increment address then next
  printf("Address %p\tvalue:%d\n",ptr,*ptr);//104   40

}
