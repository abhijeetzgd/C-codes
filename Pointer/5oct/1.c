#include<stdio.h>

void main(){

  int x=10;
  int *ptr = &x;
  int **pptr = &ptr;

  printf("%p\n",ptr);//100
  printf("%p\n",pptr);//200
  printf("%p\n",&pptr);

printf("%ld\n",sizeof(ptr));
printf("%ld\n",sizeof(pptr));

}
