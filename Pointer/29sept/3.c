#include<stdio.h>
void main(){

  int arr1[]={10,20,30,40,50};
  int arr2[]={60,70,80,90,100};

  printf("%d\n",arr1);
  printf("%d\n",&arr1);

  int *xptr = arr1 + 1;
  printf("%p\n",xptr);

  int *yptr = &arr1 + 1;
  printf("%p\n",yptr);

  printf("%d\n",*xptr);
  printf("%d\n",*yptr);

}
