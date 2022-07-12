/*

Program 38. C/C++ program to find 3's in the array
	Input : arr[33,43,44,12]
	Output : number of 3's 3
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
      if(arr[i]%10==3){
        cnt++;
      }
      arr[i]=arr[i]/10;
    }
  }
  printf("number of 3's in array is %d\n",cnt);

}
