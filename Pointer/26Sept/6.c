#include<stdio.h>

void main(){

  int arr[]={1,2,3,4,5};

  for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);
  }
  printf("using ptr \n");

  for(int i=0;i<5;i++){
    printf("%d\n",i[arr]);
  }
  printf("using ptr dreference \n");

  for(int i=0;i<5;i++){
    printf("%d\n",*(arr+i));
  }

}
