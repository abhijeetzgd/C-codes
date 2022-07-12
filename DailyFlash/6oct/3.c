#include<stdio.h>

void main(){

  int row,col,flag=0;
  printf("Enter size of row and col : ");
  scanf("%d %d",&row,&col );
  int arr[row][col];

printf("Enter elements of array\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0;i<row;i++){
    if(flag ==1){
      break;
    }
    for(int j=0;j<col;j++){
      if(j>i && arr[i][j]==0){
        flag =0;
      }else{
        if(j>i){
          flag =1;
          break;
}
      }
    }
  }

  if(flag ==0){

    printf("Given matrix is lower triangular matrix\n");
  }else{
    printf("Given matrix is not lower triangular matrix\n");

  }
}
