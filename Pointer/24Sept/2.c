#include<stdio.h>

void main(){

  float farr[]={20.3,80.453,60.8,80.3,90.4};

  float * fptr = farr;

  printf("%f\n",*fptr);

  //fptr = fptr + 1;
  fptr = fptr + 1.5;

  printf("%f\n",*fptr);


}
