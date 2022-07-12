/*
Program 40. C/C++ program to find the sum of alternative element in array
	Input : arr[12,43,65,76,12,54,87,97]

	output : 12+65+12+87
*/

#include<stdio.h>
void main(){

  int n,sum=0;
  printf("Enter size of array : ");
  scanf("%d",&n);

  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){
    if(i%2==0){
      sum = sum + arr[i];
    }
  }
  printf("sum of alternative element is %d\n",sum)
;}
