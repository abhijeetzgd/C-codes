#include<stdio.h>
void main(){

  int arr1[]={1,2,3,4,5};
  int arr2[]={6,7,8,9,10};

  float farr1[]={1.1,2.2,3.2,4.4,5.5};
  float farr2[]={6.6,7.7,8.8,9.9,10.1};

  void* vptr[4]={arr1,arr2,farr1,farr2};

  printf("Integer elements are :\n");
  for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){
      printf("%d ",*(int *)vptr[i]);
      vptr[i] = (int *)vptr[i]+1;
    }
    printf("\n");
  }

  printf("Float elements are :\n");
  for(int i=2;i<4;i++){
    for(int j=0;j<5;j++){
      printf("%0.2f ",*(float *)vptr[i]);
      vptr[i] = (float *)vptr[i]+1;
    }
    printf("\n");
  }

}
