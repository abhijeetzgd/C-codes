#include<stdio.h>
void main(){

  int n,temp=0;
  printf("Enter number of elements ");
  scanf("%d",&n);
  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  printf("mean of given array is : ");
  for(int i=0;i<n;i++){

    temp = temp + arr[i];
  }
    printf("%d\n",temp/n);
}
