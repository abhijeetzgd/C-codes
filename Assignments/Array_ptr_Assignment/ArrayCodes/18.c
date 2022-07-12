/*
Program 18: Write a C program to define an array of 10 floats declare a pointer to the array and
print values from that array using pointer. Take inputs from user.

*/

#include<stdio.h>
void main(){
  int n;
  printf("Enter size of array : ");
  scanf("%d",&n);

  int arr[n];

  printf("Enetr elements of array\n");
  for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
  }

  printf("value\t\t\t  Address          \n");

  for(int i=0;i<n;i++){

    printf("%d\t\t\t%p\n",*arr + i,&arr[i]);
  }

}
