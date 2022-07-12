#include<stdio.h>

void main(){

  int arr1[5]={10,20,30,40,50};
  int arr2[5]={60,70,80,90,100};

  int (*ptr)[5] = &arr1;

  int i=0;
  for(int j=0;j<5;j++){
  //  printf("%d\n",*(*(&arr1 + i)+j) );
    printf("%d\n",*(*(arr1 + i)+j) );

  }


}
