/*
Program 9: Write a C program that has an array of integers take size of array from user and
elements too, reverse the element in array.
Input: Size of array : 9
1 2 3 4 5 6 7 8 9
Output: Reversed Array: 9 8 7 6 5 4 3 2 1
*/

#include<stdio.h>

void AcceptArray(int arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

}

void reverse(int arr[],int n){

  int temp=0;

  for(int i=0;i<n/2;i++){
    temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = temp;
  }
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
   reverse(arr,n);
   display(arr,n);
   printf("\n");

}
