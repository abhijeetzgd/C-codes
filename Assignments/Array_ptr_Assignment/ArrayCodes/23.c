/*
Program 23: Write a C Program that has a two dimensional array of integers in it take number of
rows and column from user, accept the elements from user too, print addition of all elements,
which are at corner of array.
Input:
1 2 3
4 5 6
7 8 9
Output: Sum of elements at corner is 20

*/

#include<stdio.h>
void main(){

  int r,c,sum=0;
  printf("Enter number of row and column : ");
  scanf("%d%d",&r,&c);

  int arr[r][c];

printf("Enter Elements\n");
  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }

  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
      if((i==0 || i==r-1)&&(j==0 || j==c-1) )
        sum = sum + arr[i][j];
      
    }
  }

printf("sum of elements at corner = %d\n",sum);
}
