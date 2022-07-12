#include<stdio.h>
void main(){
  int a[5]={1,2,3,4,5};
  int b[5];

  printf("Array elements\n");
  for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
    }


  for(int i=0;i<5;i++){
    b[i]=a[i];
    }

    printf("Array elements after copying\n");

    for(int i=0;i<5;i++){
      printf("%d\n",b[i]);
      }

}
