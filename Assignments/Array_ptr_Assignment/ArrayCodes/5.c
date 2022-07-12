/*
Program 5: Write a C program that has an array of integers take size of array from user and
elements too, Find Smallest Element & Largest element from array and print it.
Input: Size of Array 10
9 2 1 3 0 22 44 5 9 2
Output: Smallest element in array is 0 && Largest element in array is 44
*/

#include<stdio.h>

void AcceptArray(int arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
//  return arr;
}

int smallestElement(int arr[],int n){

  int small = arr[0];
  for(int i=0;i<n;i++){

    if(small>arr[i]);
        small = arr[i];
  }
  return small;
}

int largestElement(int arr[],int n){

  int large = arr[0];
  for(int i=0;i<n;i++){

    if(large<arr[i]);
        large = arr[i];
  }
  return large;
}

void main(){

  int n,small,large;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   int arr[n];
   AcceptArray(arr,n);

   small = smallestElement(arr,n);
   large = largestElement(arr,n);
   printf("smallest elements of array is %d\nLargest element of array is %d\n",small,large);

}
