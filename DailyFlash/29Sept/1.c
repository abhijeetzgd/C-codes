#include<stdio.h>

void main(){

  int arr[5]={11,25,43,52,67};

  int *ptr = arr;

  for(int i=0;i<5;i++){
    printf("%d ",*(ptr+i));
  }
  printf("\n");
}
