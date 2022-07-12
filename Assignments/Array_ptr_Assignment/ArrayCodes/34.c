/*
Program 34. C/C++ program to  find third largest number in array
 Input : arr[12 ,43,54,65,12,555]
 Output: 54
*/

#include<stdio.h>

void swap(int *a,int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void main(){

  int n,max,temp;

  printf("Enter size of array");
  scanf("%d",&n);

  int arr[n];

  for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
  }

  max = 0;

  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
      if(arr[j]>arr[j+1]){
        swap(&arr[j],&arr[j+1]);
      }
    }

  }
  max = arr[n-1];
  for(int i=n-1-1;i>0;i++){
    if(max != arr[i]){
      if(arr[i] != arr[i-1])
      printf("third largest element is %d\n",arr[i-1]);
      return ;
    }
  }
  //printf("it doent have third largest element\n");
}
