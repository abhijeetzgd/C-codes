/*
Program 14: Write a C program to demonstrate addition operation from pointer arithmetic onto
a double pointer and print the changes into address resolutions done by following operations
a. Incrementing by 1
b. Incrementing by 4
c. Incrementing by 0
{Note: Dereferencing the pointers are not necessary & Commenting of operations is expected}
*/

#include<stdio.h>
void main(){

  double d=10;
  double *dptr = &d;

  printf("1.Incrementing pointer by 2\n");
  printf("Adress of dptr before Incrementing %p\n",dptr);
  dptr = dptr+2;//dptr + (2*size ofdatatype) increment by 8
  printf("Adress of dptr After Incrementing %p\n\n",dptr);


  printf("1.Incrementing pointer by 3\n");
  printf("Adress of dptr before Incrementing %p\n",dptr);
  dptr = dptr+3;//increse by 12
  printf("Adress of dptr After Incrementing %p\n\n",dptr);

  printf("1.Incrementing pointer by 1\n");
  printf("Adress of dptr before Incrementing %p\n",dptr);
  dptr = dptr+1;//increse by 4
  printf("Adress of dptr After Incrementing %p\n\n",dptr);

}
