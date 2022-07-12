//pre - incrementing pointer

#include<stdio.h>
void main(){

  int arr[]={10,20,30,40,50};

  int *iptr = &arr[1];
  int *ansptr = ++iptr;

  printf("%p\n",ansptr);
  printf("%d\n",*ansptr);
  printf("%d\n",*iptr);
  printf("%p\n",iptr);

}
