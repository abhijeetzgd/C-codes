/*
Program 44. C/C++ program to store the fibonacci in the array of length 50 and find the
sum of the element in aaray

	input : store the fibonacci seires of 50 element and store in array and make sum

*/

#include<stdio.h>



void main(){

int arr[50];

int a=0,b=1;

for(int i=0;i<50;i++){
  arr[i]=a+b;
  int temp = a+b;
  a=b;
  b=temp;
}

for(int i=0;i<50;i++){

  printf("%d ",arr[i]);
}
printf("\n");
}
