/*
Program 36. C/C++ program to find 1's in the array
	Input : arr[21,43,55,11,87]
	output : number of ones are 3
*/

#include<stdio.h>

void main(){
  int n,cnt=0;
  printf("size of array : ");
  scanf("%d",&n);

  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){

    while(arr[i]!=0){
      if(arr[i]%10==1){
        cnt++;
      }
      arr[i]=arr[i]/10;
    }
  }
  printf("number of 1's in array is %d\n",cnt);

}
