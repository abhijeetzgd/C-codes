#include<stdio.h>

void main(){

  int n;
  scanf("%d",&n);
  float farr[n];

  for(int i=0;i<n;i++){
    scanf("%f",&farr[i]);
  }

  void *vptr = farr;

  for(int i=0;i<n;i++){
    printf("%0.2f ",*(float *)vptr+i);
  //  vptr++;
  }
printf("\n" );
}
