/*
Program 50. C/C++ Program for Print Matrix Diagonally

	input:
		1 5 0
		2 6 8
		3 7 9
	output :
		1 ,6, 9

*/

#include<stdio.h>

void main(){

  int r,c;

  printf("Enter size of Matrix: ");
  scanf("%d%d",&r,&c);

  int arr[r][c];

  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);

    }
  }
printf("diagonal elements are\n ");
  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
      if(i==j)
      printf("%d ",arr[i][j]);

    }
  }
printf("\n");

}
