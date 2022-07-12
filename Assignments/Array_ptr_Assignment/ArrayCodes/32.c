/* Program 32. C/C++ program to find duplicate in 2 array
	Input : arr[12,43,541,4]
		arr1[12,44,76,56]
	Output : 12
*/
#include<stdio.h>

void main(){

  int n;
  printf("enter size of array");
  scanf("%d",&n);

  int arr1[n],arr2[n];

  printf("Enter first array elements\n" );

  for(int i=0;i<n;i++){

    scanf("%d",&arr1[i]);
  }
printf("Enter second array elements\n" );
  for(int i=0;i<n;i++){

    scanf("%d",&arr2[i]);
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr1[i]==arr2[j]){
        printf("%d is duplicated\n",arr1[i]);
      }
    }
  }
}
