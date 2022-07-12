/*
Program 2: Write a C program that has an array of integers take size of array from user and
elements too, print the Sum of elements in array.
Input: size of array = 9
1 2 3 4 5 6 7 8 9
Output: sum of array element = 45
*/

#include<stdio.h>

void AcceptArray(int arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
//  return arr;
}

int Sum(int arr[],int n){
int sum=0;
  for(int i=0;i<n;i++){

      sum = sum + arr[i];
      }
      return sum;
}


void main(){

  int n,sum;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   int arr[n];
   AcceptArray(arr,n);

  sum = Sum(arr,n);
   printf("sum of array elements = %d\n",sum);

}
