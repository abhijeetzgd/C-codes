/*Program 31. C/C++ Program for Write a program to reverse an array

	Input : arr[12,43,65,76,87,34]
	output : arr[34,87,76,65,43
  */

#include<stdio.h>
void main(){

  int n;
  printf("enter size of array\n");
  scanf("%d",&n);

  int arr[n];

  printf("Enter elements of array");
  for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){
  int  temp = arr[i];
  arr[i] = arr[n-i-1];
  arr[n-i-1]=temp;
  }

  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
