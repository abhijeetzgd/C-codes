/*
Program 13: Write a C program to demonstrate addition operation from pointer arithmetic onto
an integer pointer and print the changes into address resolutions done by following operations
a. Incrementing by 2
b. Incrementing by 3
c. Incrementing by 1
{Note: Dereferencing the pointers are not necessary & Commenting of operations is expected}
*/

#include<stdio.h>
void main(){

  int i=10;
  int *iptr = &i;

  printf("1.Incrementing pointer by 2\n");
  printf("Adress of iptr before Incrementing %p\n",iptr);
  iptr = iptr+2;//iptr + (2*size ofdatatype) increment by 8
  printf("Adress of iptr After Incrementing %p\n\n",iptr);


  printf("1.Incrementing pointer by 3\n");
  printf("Adress of iptr before Incrementing %p\n",iptr);
  iptr = iptr+3;//increse by 12
  printf("Adress of iptr After Incrementing %p\n\n",iptr);

  printf("1.Incrementing pointer by 1\n");
  printf("Adress of iptr before Incrementing %p\n",iptr);
  iptr = iptr+1;//increse by 4
  printf("Adress of iptr After Incrementing %p\n\n",iptr);

}
