/*
Program 4: Write a C program that has an array of floats take size of array from user and
elements too, Calculate Multiplication of all odd index based elements in array and print it.
Input: Size of Array 8
10.34 2.3 0.24 1.23 16.00 7.2 8.8 9.2
Output: Sum of Even elements in array: 65476.839
*/

#include<stdio.h>

void AcceptArray(float arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf("%f",&arr[i]);
  }

}

int MultiOfOddIndex(float arr[],int n){
float sum=1;
  for(int i=0;i<n;i++){
      if(i%2 ==1)
      sum = sum * arr[i] ;
      }
      return sum;
}


void main(){

  int n;
  float sum;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   float arr[n];
   AcceptArray(arr,n);

  sum = MultiOfOddIndex(arr,n);
   printf("sum of array elements = %f\n",sum);

}
