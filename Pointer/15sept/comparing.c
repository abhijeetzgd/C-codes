#include<stdio.h>

void main(){

  int arr1[5]={1,2,3,4,5};
  int arr2[5]={1,2,3,4,5};

  if(arr1 == arr2){                  //comparing address
    printf("Both arrays are same\n");
  }else{
    printf("Both arrays are different\n");
    }

}
