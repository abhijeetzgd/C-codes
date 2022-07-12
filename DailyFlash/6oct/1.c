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
      if(i==j && arr[i][j]==1){
        flag =0;
      }else{
        if(arr[i][j]==0){
          flag=0;
        }else{
          flag =1;
          break;
        }
      }
    }
  }

  if(flag ==0){

    printf("Given matrix is an identity matrix\n");
  }else{
    printf("Given matrix is not an identity matrix\n");

  }
}
