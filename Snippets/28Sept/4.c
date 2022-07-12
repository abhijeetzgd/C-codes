#include<stdio.h>

int global_arr[5];

void main(){

  int local_arr[5];

  printf("Local array\n");

  for(int i=0;i<5;i++){
    printf("%d ",local_arr[i]);
  }

  printf("\nglobal array\n");

    for(int i=0;i<5;i++){
      printf("%d ",global_arr[i]);
    }
}
