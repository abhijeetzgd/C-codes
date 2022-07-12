#include<stdio.h>

void main(){

  int iarr[4] = {10,20,30,40};
  char carr[4] = {'A','B','C','D'};
  float farr[4] = {1.1,2.2,3.3,4.3};

  void *vptr1 = iarr;
  void *vptr2 = carr;
  void *vptr3 = farr;

  printf("%d\n",*(int *)vptr1);    //10
  printf("%c\n",*(char *)vptr2);  //A
  printf("%f\n",*(float *)vptr3);  //A

  vptr1 = (int *)vptr1 + 1;
  vptr2 = (char *)vptr2 + 1;
  vptr3 = (float *)vptr3 + 1;

  printf("%d\n",*(int *)vptr1);    //10
  printf("%c\n",*(char *)vptr2);  //A
  printf("%f\n",*(float *)vptr3);  //A

}
