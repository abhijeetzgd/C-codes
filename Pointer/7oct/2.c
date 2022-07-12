//Array of pointer

#include <stdio.h>

void main(){

  int a=10,b=20,c=30;

  int *ptr1=&a , *ptr2=&b,*ptr3 = &c;

  int *arrptr[3] = {ptr1,ptr2,ptr3};

//Address
  printf("%p\n",arrptr[0]);
  printf("%p\n",arrptr[1]);
  printf("%p\n",arrptr[2]);

//actual values
  printf("%d\n",*arrptr[0]);
  printf("%d\n",*arrptr[1]);
  printf("%d\n",*arrptr[2]);

//actual values
  printf("%d\n",*(*(arrptr+0)));
  printf("%d\n",*(*(arrptr+1)));
  printf("%d\n",*(*(arrptr+2)));


}
