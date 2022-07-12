//addingg two pointer

#include<stdio.h>

void main(){

  int arr[] = {1,2,3,4,5};

  int *iptr1 = &arr[1];
  int *iptr2 = &arr[3];
  //int * ans = iptr1 + iptr2;                  //Error
  int * ans = iptr1 + iptr2 + 4;                  //Error

  printf("%d\n",*ans);
}
