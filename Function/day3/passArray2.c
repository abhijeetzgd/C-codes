#include<stdio.h>

int pass(int *ptr){
  int sum =0;
  for(int i=0;i<5;i++)
    sum = sum + *(ptr+i);
  return sum;
}


void main(){

  int arr[]={10,20,30,40,50};

  int sum =0;

  sum = pass(arr);

  printf("sum of array elements = %d\n",sum);
}
