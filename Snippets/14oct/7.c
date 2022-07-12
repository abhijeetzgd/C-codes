#include<stdio.h>

void main(){

  int arr1[] = {1,2,3,4};
  int arr2[] = {1,2,3,4};
  int ans = &arr2[3] - &arr1[2] ;


  printf("%d\n",ans );
}
