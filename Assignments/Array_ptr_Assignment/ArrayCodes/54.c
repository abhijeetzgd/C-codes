/*
Program 54. C/C++ program to find the sum of normal element and  reverse element of the array
	Input :		arr[12 ,43, 54,65]

			 arr [21 ,34 ,45 ,56]
	Output :
			arr1[12+21 ,43 +34,54+45,65+56]

*/

#include<stdio.h>

void main(){

  int n,sum=0;
  printf("Enter size of array : ");
  scanf("%d",&n);
  int arr[n],a[n],temp;

  for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
    a[n]=0;
  }

  for(int i=0;i<n;i++){
    a[i]=arr[i];
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

printf("Addition of element after reversing\n");
  for(int i=0;i<n;i++){

    printf("%d ",arr[i]+a[i]);

  }printf("\n");

}
