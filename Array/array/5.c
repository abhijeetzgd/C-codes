#include<stdio.h>
void main(){

  int jerNo[5] = {11,7,45,12,10};

  int x = 10;

printf("%d\n",jerNo[3] );   //12

printf("addressof total box - %p\naddressof first box - %p\n",jerNo,&jerNo[0] );

int *a,*b;
a = jerNo;
b = &jerNo[0];

if(a == b){
  printf("address of first element and address of total box is same\n" );
} else {
  printf("address of first element and address of total box is NOT same\n" );

}
}
