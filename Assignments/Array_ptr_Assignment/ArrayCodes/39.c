/*
Program 39. C/C++ program to find sum of the ocuurence of 1's element + 2's element
	+ 3's element

	Input : arr[32,54,23,76,12,54,11,33,22]

	output : 1's element 3 + 2's element 5 + 3's element 4
		sum =3+4+5=12
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
      if(arr[i]%10==1||arr[i]%10==2||arr[i]%10==3){
        cnt++;
      }
      arr[i]=arr[i]/10;
    }
  }
  printf("number of 1's,2's & 3's in array is %d\n",cnt);

}
