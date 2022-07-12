#include<stdio.h>

void main(){

  int idata = 10;

  int *iptr1,*iptr2,*iptr3,*iptr4;

  iptr1 = &idata;
  iptr2 = iptr1;
  iptr3 = iptr2;
  iptr4 = iptr3;

printf("%d\n",idata);

  printf("%p\n",iptr1 );
  printf("%p\n",iptr2 );
  printf("%p\n",iptr3 );


    printf("%d\n",*iptr1 );
    printf("%d\n",*iptr2 );
    printf("%d\n",*iptr3 );
}
