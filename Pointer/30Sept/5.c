#include<stdio.h>

void main(){

  int arr[][5] = {{1,2},{6,7,8},{11,12,13}};

  printf("elements of array\n");

  for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
      printf("%d  ",arr[i][j] );
  }printf("\n");
}

printf("\naddres of elements\n");

  for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
      printf("%p ",&arr[i][j] );
  }printf("\n");
}

}
