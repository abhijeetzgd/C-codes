/*
Program 1: Write a C program that has an array of integers take size of array from user and
elements too, print that array.
Input: Size of Array: 10
Random input from user
Output: Print Entered Array.
*/

#include<stdio.h>

void AcceptArray(int arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
//  return arr;
}

void display(int arr[],int n){

  for(int i=0;i<n;i++){

    printf("%d ",arr[i]);
  }
}


void main(){

  int n;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   int arr[n];
   AcceptArray(arr,n);

   display(arr,n);
   printf("\n");

}
