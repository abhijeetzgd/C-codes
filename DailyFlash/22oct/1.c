#include<stdio.h>

void Add(int *ptr1,int *ptr2){

  int arr3[3];
  for(int i=0;i<3;i++){

    arr3[i] = *(ptr1+i) + *(ptr2+i);
  }

  printf("Addition = \n");
  for(int i=0;i<3;i++){

    printf("%d ",arr3[i]);
  }
  printf("\n");
}

void main(){

  int arr1[3]={1,2,3};
  int arr2[3]={1,2,3};

  Add(arr1,arr2);

}
