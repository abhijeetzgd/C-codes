#include<stdio.h>
void main(){

  int n,min=100;
  printf("Enter number of elements you want to enter  : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements : \n" );

  for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){

    if(arr[i]<min){
      min=arr[i];
    }

  }

  printf("Minimum Element is %d\n",min);
}
