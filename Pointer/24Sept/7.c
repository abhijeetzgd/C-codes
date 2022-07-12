//subtracting two pointers

#include<stdio.h>

void main(){

  int arr[]={1,2,3,4,5,6,7,8,9};

  int *ptr1 = &arr[1];
  int *ptr2 = &arr[7];

  printf("%d\n",*ptr1);
  printf("%d\n",*ptr2);

  int ans = ptr1 - ptr2;

  printf("%d\n",ans);
}
