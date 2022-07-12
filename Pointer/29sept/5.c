#include<stdio.h>
void main(){

  int a1[]={10,20,30,40,50};
  int a2[]={60,70,80,90,100};
  int a3[]={110,120,130};

//Array Address

int *ptr = &a2 ;
printf("%d\n\n",*ptr);//60

ptr = &a2+1;
printf("%d\n\n",*ptr);//110 - random


}
