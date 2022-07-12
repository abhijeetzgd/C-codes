#include<stdio.h>
void main(){

  int a1[]={10,20,30,40,50};
  int a2[]={60,70,80,90,100};
  int a3[]={110,120,130};

//Array Address

int *ptr = &a3 ;
printf("%d\n\n",*ptr);//110
/*
a1 array is star next to a3 Array
so if skip a3 array then we directly jump to a1 Array
*/

ptr = &a3+1;
printf("%d\n\n",*ptr);//10
//proved !!!

}
