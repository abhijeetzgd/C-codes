#include<stdio.h>

void main(){

  int arr[5]={5,10,15,20,25};
  int i=5,sum =0;

  while(i>=2){
    sum = sum+arr[--i];
  }
  printf("Sum = %d\n",sum );
}
