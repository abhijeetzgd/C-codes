#include<stdio.h>
void main(){

  int a,n;
  printf("Enter the length of array");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  a = sizeof(arr);

  printf("Size of array = %d\n",a);
}
