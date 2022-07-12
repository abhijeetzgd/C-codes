#include<stdio.h>

void main(){

  int marr[1][3][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

  printf("%p\n",&marr[1][2]);//128

  printf("%p\n",marr);//100
  printf("%p\n",marr[0]);//100
  printf("%p\n",marr[0][0]);//100
  printf("%d\n",marr[0][0][0]);//1
  /*
  3D array using pointer
  gate - plane - row - col
  */
  printf("%d\n",*(*(*(marr+0) + 0)+0));//1

  int a= *(*(*(marr+0) + 0)+0);
  printf("%d\n",a);
}
