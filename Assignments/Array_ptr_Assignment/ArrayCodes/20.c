/*
Program 20: Write a C program to define an array of 10 integers, Accept values from user into
array using pointer.
{Note: Can use array manipulation as pointer or can declare a separate Pointer to array}
*/

#include<stdio.h>
void main(){
  int n,temp;
  printf("Enter size of array : ");
  scanf("%d",&n);
  int arr[n];


  for(int i=0;i<n;i++){

    scanf("%d",&temp);
    *(arr+i) = temp;
  }

printf("Elements of array are\n");

    for(int i=0;i<n;i++){

printf("%d ",arr[i]);
    }
printf("\n");

}
