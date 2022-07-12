#include<stdio.h>
void main(){

  char ch = 'a';
  int i = 10;
  float f = 12.34;
  double d = 39.32;

  char *cptr = &ch;
  int *iptr = &i;
  float *fptr = &f;
  double *dptr = &d;
  void *v=0;

  printf("%c\n",ch);
  printf("%p\n",cptr);
  printf("%c\n",*cptr);
printf("\n");
  printf("%d\n",i);
  printf("%p\n",iptr);
  printf("%d\n",*iptr);
  printf("\n");

  printf("%f\n",f);
  printf("%p\n",fptr);
  printf("%f\n",*fptr);
  printf("\n");

  printf("%f\n",d);
  printf("%p\n",dptr);
  printf("%f\n",*dptr);

}
