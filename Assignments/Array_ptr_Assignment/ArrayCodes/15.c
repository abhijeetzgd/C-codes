/*
Program 15: Write a C program to demonstrate addition operation from pointer arithmetic onto
a character pointer and print the changes into address resolutions done by following operations
a. Incrementing by 2
b. Incrementing by 3
c. Incrementing by 4
{Note: Dereferencing the pointers are not necessary & Commenting of operations is expected}

*/

#include<stdio.h>
void main(){

  char c=10;
  char *cptr = &c;

  printf("1.Incrementing pointer by 2\n");
  printf("Adress of cptr before Incrementing %p\n",cptr);
  cptr = cptr+2;//cptr + (2*size ofdatatype) increment by 8
  printf("Adress of cptr After Incrementing %p\n\n",cptr);


  printf("1.Incrementing pointer by 3\n");
  printf("Adress of cptr before Incrementing %p\n",cptr);
  cptr = cptr+3;//increse by 12
  printf("Adress of cptr After Incrementing %p\n\n",cptr);

  printf("1.Incrementing pointer by 1\n");
  printf("Adress of cptr before Incrementing %p\n",cptr);
  cptr = cptr+1;//increse by 4
  printf("Adress of cptr After Incrementing %p\n\n",cptr);

}
