/*
Program 53. C/C++ program to reverse the each element of the array

	input : arr[12 ,43, 54,65]

	ouput : arr [21 ,34 ,45 ,56]
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

    while(arr[i]!=0){
      sum=sum*10+arr[i]%10;
      arr[i]=arr[i]/10;
    }
    arr[i]=sum;
    sum=0;
  }
printf("element after reversing\n");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }printf("\n");
}
