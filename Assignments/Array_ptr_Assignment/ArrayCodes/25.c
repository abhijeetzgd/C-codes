/*
rogram 25; Write a C Program that have two, two dimensional arrays of integers in it take
number of rows and column as 3, 3 respectively, accept the elements from user, Store the
addition of these two matrixes into third two dimensional array and print it.

*/

#include<stdio.h>
void main(){

  int arr1[3][3], arr2[3][3], result[3][3];

printf("Enter Elements for first matrix\n");
  for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
      scanf("%d",&arr1[i][j]);
    }
  }


  printf("Enter Elements for second matrix\n");
    for(int i=0;i<3;i++){

      for(int j=0;j<3;j++){
        scanf("%d",&arr2[i][j]);
      }
    }

  for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){

      result[i][j]=arr1[i][j]+arr2[i][j];

    }
  }

printf("Multiplication Of Matrix is as\n");

for(int i=0;i<3;i++){

  for(int j=0;j<3;j++){

    printf("%d ",result[i][j]);
  }printf("\n");
}

}
