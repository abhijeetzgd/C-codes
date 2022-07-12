#include<stdio.h>
void main(){

  int a,n;

  printf("Enter range : ");
  scanf("%d %d",&a,&n);
  printf("Before swapping : %d %d\n",a,n);
  a = a+n;
  n = a-n;
  a = a-n;
  printf("After swapping : %d %d\n",a,n);



}
