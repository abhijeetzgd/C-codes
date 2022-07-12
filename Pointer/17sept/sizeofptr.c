#include<stdio.h>
void main(){

  char ch = 'a';
  int val = 10;
  float f = 12.34;
  double d = 39.32;

  char *cptr = &ch;
  int *iptr = &val;
  float *fptr = &f;
  double *dptr = &d;
  void *v=0;
  printf("size of char %ld \n",sizeof(ch));      //1
  printf("size of  int %ld \n",sizeof(val));       //4
  printf("size of float %ld \n",sizeof(f));       //4
  printf("size of double %ld \n",sizeof(d));       //8
  printf("size of char ptr %ld \n",sizeof(cptr));    //8
  printf("size of int ptr %ld \n",sizeof(iptr));    //8
  printf("size of float ptr %ld \n",sizeof(fptr));    //8
  printf("size of double ptr %ld \n",sizeof(dptr));    //8
  printf("size of void ptr %ld \n",sizeof(v));
}
