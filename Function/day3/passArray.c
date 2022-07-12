#include<stdio.h>

int pass(int arr[]){
  int sum =0;
  for(int i=0;i<5;i++)
    sum = sum + arr[i];
  return sum;  
}


void main(){

  int arr[]={1,2,3,4,5};

  int sum =0;

  sum = pass(arr);

  printf("sum of array elements = %d\n",sum);
}
