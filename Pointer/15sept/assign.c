#include<stdio.h>

void main(){

  int arr1[5]={1,2,3,4,5};
  int arr2[5];

  printf("%d %d %d %d %d\n",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4]);
  printf("%d %d %d %d %d\n",arr2[0],arr2[1],arr2[2],arr2[3],arr2[4]);

  arr2=arr1[0];                              //error

    printf("%d %d %d %d %d\n",arr1[0],arr1[1],arr1[2],arr1[3],arr1[4]);
    printf("%d %d %d %d %d\n",arr2[0],arr2[1],arr2[2],arr2[3],arr2[4]);

}
