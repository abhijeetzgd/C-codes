#include<stdio.h>
void main(){

  static int arr[2]={0,1};
  printf("%d %d",arr[-1],arr[3]);
}
