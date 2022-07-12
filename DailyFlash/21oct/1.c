#include<stdio.h>

int minimum(int *ptr,int n){
  int min = *(ptr+0);

  for(int i=0;i<n;i++){
    if(min >= *(ptr+i)){
      min = *(ptr+i);
    }
  }
  return min;
}

void main(){

  int n,min;
  printf("Enter number of elements in array : ");
  scanf("%d",&n);
  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  min = minimum(arr,n);

  printf("minimun number is %d\n",min);
}
