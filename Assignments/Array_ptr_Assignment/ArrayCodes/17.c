/*
Program 17: Write a C Program to print addresses of each array indexes of array 10 integers and
print values too.
Input: Array Elements
Output: Array Elements and address of that element in array.
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

    printf("%d\t\t\t%p\n",arr[i],&arr[i]);
  }

}
