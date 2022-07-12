#include<stdio.h>
void main(){
  int a=12,b=0;
  a=a++;
  printf("%d \n",a);
  ++a;
    printf("%d \n",a);
  a=a++;
    printf("%d \n",a);
    printf("%d \n",a);

}
/*
 12
 13
 13
 13
 */
