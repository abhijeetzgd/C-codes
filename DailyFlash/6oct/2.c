#include<stdio.h>

void main(){

  int row,col,sum=0;
  printf("Enter size of row and col : ");
  scanf("%d %d",&row,&col );
  int arr[row][col];

printf("Enter elements of array\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&arr[i][j]);
    }
  }

//for avg of row
  for(int i=0;i<row;i++){
    sum = 0;
    for(int j=0;j<col;j++){

      sum = sum+arr[i][j];
    }
    printf("Average of row %d is %d\n",i,sum/col);

  }

  //for avg of col

  for(int i=0;i<col;i++){
    sum = 0;
    for(int j=0;j<row;j++){

      sum = sum+arr[j][i];
    }
    printf("Average of col %d is %d\n",i,sum/row);
    sum =0;

  }


}
