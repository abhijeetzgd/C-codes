/*
Program 3: Write a C program that has an array of integers take size of array from user and
elements too, Calculate Sum of squares of all even elements in array and print it.
Input: Size of Array 10
1 2 3 4 5 6 7 8 9 10
Output: Sum of Squares of Even elements in array: 220
*/

#include<stdio.h>

void AcceptArray(int arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
//  return arr;
}

int SumOfEven(int arr[],int n){
int sum=0;
  for(int i=0;i<n;i++){
      if(arr[i]%2 ==0)
      sum = sum + arr[i] * arr[i];
      }
      return sum;
}


void main(){

  int n,sum;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   int arr[n];
   AcceptArray(arr,n);

  sum = SumOfEven(arr,n);
   printf("sum of array elements = %d\n",sum);

}
