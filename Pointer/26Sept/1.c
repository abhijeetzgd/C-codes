#include<stdio.h>
void main(){

  int arr[]={1,2,3,4,5};

  int *ptr1 = &arr[0];

  int *ptr2 = &arr[2];

  //int *a = 10000-ptr1;
  int *a = ptr1-112877;

  printf("%d\n",a);
}
