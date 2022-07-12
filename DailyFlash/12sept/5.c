#include<stdio.h>
void main(){

  int n;
  printf("Enter number of elements ");
  scanf("%d",&n);
  int arr[n];

  printf("enter array elements  : ");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  printf("array elements divisible by 5 are : ");
  for(int i=0;i<n;i++){
    if(arr[i]%5==0)
    printf("%d ",arr[i]);
  }
    printf("\n");
}
