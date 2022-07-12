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

int numberOfOne(int arr[],int n){

  int count = 0;

  for(int i=0;i<n;i++){
    int val = arr[i];
    while(val>0){
      int rem = val%10;

      if(rem == 1)
        count++;

      val = val/10;
    }
}
return count;
}


void main(){

  int n,cnt;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   int arr[n];
   AcceptArray(arr,n);

   cnt = numberOfOne(arr,n);
   printf("number of 1's in given array is %d\n",cnt);

}
