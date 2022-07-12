#include<stdio.h>

void main(){

  int row=3,col=3;

  int arr[row][col];

  printf("Enter the elements\n");
  for(int i=0;i<row;i++){

    for(int j=0;j<col;j++){

      scanf("%d",&arr[i][j]);
    }
  }

  printf("Enter elements are :\n");

  for(int i=0;i<row;i++){

    for(int j=0;j<col;j++){

      printf("%d ",arr[i][j]);
    }printf("\n");
  }

}
