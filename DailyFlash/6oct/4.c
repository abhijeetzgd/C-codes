#include<stdio.h>

void main(){

  int row,col,flag=0;
  printf("Enter size of row and col : ");
  scanf("%d %d",&row,&col );
  int arr[row][col];
  int sq[row];

printf("Enter elements of array\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0;i<row;i++){

    for(int j=0;j<col;j++){
      if(i==j){
      sq[i]=arr[i][j] * arr[i][j];
      }
    }
  }
printf("Enter elements are \n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d ",arr[i][j]);
    }printf("\n");
  }

  printf("diagonal elements square \n");

  for(int j=0;j<row;j++){
    printf("%d ",sq[j]);
  }printf("\n");
}
