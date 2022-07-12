#include<stdio.h>
void main(){

  const int a =10,b=2;

  const  int *ptr1 = &a;

  int *ptr2 = &a ;

  printf("%d\n",a );
  printf("%d\n",*ptr1 );
  printf("%d\n",*ptr2 );

  printf("Changed\n");
  *ptr2 = 20;

    printf("%d\n",a );
    printf("%d\n",*ptr1 );
    printf("%d\n",*ptr2 );
}
