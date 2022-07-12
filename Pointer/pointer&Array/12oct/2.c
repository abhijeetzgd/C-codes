#include<stdio.h>

void main(){

  int arr1[5]={10,20,30,40,50};
  int arr2[5]={60,70,80,90,100};

  int(*ptr)[5] = &arr1;  /// because it is double pointer so gate adress is given

  printf("%p\n",ptr);

  ptr++; ///purn array skip karel

  printf("%p\n",ptr);



}
