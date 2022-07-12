#include<stdio.h>
void main(){

  int n;
  printf("Enter number of elements : ");
  scanf("%d",&n );
  int arr[n];

  printf("Enter the elements\n");

  for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
  }
  printf("Number divide by 2 are : ");
  for(int i=0;i<n;i++){
    if(arr[i]%2==0)
    printf("%d ",arr[i] );
  }
  printf("\n");
}
