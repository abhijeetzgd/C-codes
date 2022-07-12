#include<stdio.h>

void main(){

  int arr[5] = {10,20,30,40,50};

  int *ptr1 = arr;
  int *ptr2 = &arr;

  printf("%p\n",ptr1 );
  printf("%p\n",ptr2 );

  ptr1++;
  ptr2++;

  printf("%p\n",ptr1 );
  printf("%p\n",ptr2 );

}
