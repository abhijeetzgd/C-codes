/*
Program 46. C program to find transpose of a matrix

	input :

		1 2 3 4
		5 6 7 8
		0 8 9 2
	output :
		1 5 0
		2 6 8
		3 7 9
		4 8 2

*/

#include<stdio.h>

void main(){

  int r1,c1;

  printf("Enter number of rows and col\n");
  scanf("%d%d",&r1,&c1);

  int arr[r1][c1];
  int tra[c1][r1];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        tra[j][i]=arr[i][j];
    }
  }

  printf("Entered matrix is\n");
    for(int i=0;i<r1;i++){
      for(int j=0;j<c1;j++){
        printf("%d ",arr[i][j]);
      }printf("\n");
    }


printf("Transpose matrix is\n");
  for(int i=0;i<c1;i++){
    for(int j=0;j<r1;j++){
      printf("%d ",tra[i][j]);
    }printf("\n");
  }

}
