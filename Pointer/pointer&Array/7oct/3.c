//Array of pointer
//task from Shashi sir
#include <stdio.h>

void main(){

  int a=10,b=20,c=30;

  int *ptr1=&a , *ptr2=&b,*ptr3 = &c;

  int **pptr1 = &ptr1,**pptr2 = &ptr2,**pptr3 = &ptr3;

  int **arrpptr[3] = {pptr1,pptr2,pptr3};

//Address
  printf("%p\n",arrpptr[0]);
  printf("%p\n",arrpptr[1]);
  printf("%p\n",arrpptr[2]);

//actual values
  printf("%d\n",**arrpptr[0]);
  printf("%d\n",**arrpptr[1]);
  printf("%d\n",**arrpptr[2]);

//actual values
  printf("%d\n",*(*(*(arrpptr+0))));
  printf("%d\n",*(*(*(arrpptr+1))));
  printf("%d\n",*(*(*(arrpptr+2))));

}
