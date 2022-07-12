//Subtracting pointer by nuber

#include<stdio.h>
void main(){

  int arr[] = {10,20,30,40,50};

  int * iptr = &(arr[1]);

  printf("%d\n",*iptr);

  iptr = iptr -1;

  printf("%d\n",*iptr);

}
