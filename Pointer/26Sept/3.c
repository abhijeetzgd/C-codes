#include<stdio.h>
void main(){

  int arr[]={1,2,3,4,5};

  int *ptr = &arr[2];
  printf("%d\n",*ptr);//3

  int *ans = ptr--;
  printf("%p\n",ans);//add
  printf("%p\n",ptr);//add diffe
  printf("%d\n",*ans);//3

}
