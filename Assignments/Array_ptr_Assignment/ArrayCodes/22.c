/*
Program 22: Write a C Program that has a two dimensional array of integers in it take number of
rows and column from user, accept the elements from user too, and print the values.
Manipulation of array using pointers is expected in this code!.

*/

#include<stdio.h>
void main(){

  int r,c,n;
  printf("Enter number of row and column : ");
  scanf("%d%d",&r,&c);

  int arr[r][c];

printf("Enter Elements\n");
  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }

printf("Enter Elements are\n");

  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
      printf("%d ",*(*(arr+i)+j));
    }printf("\n");
  }


}
