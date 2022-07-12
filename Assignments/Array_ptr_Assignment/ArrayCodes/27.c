/*

Program 27.  C Program to find sum of elements in a given array

	Input : size of array = 9
		1 2 3 4 5 6 7 8 9
	Output: sum of array element = 45

	test cases:
		1.T =4------------> number of times the user shud take the input in array and print the sum
		2.No negative value shud be the element of the array
		3.the element shud not exceed the size while inserting the data

*/

#include<stdio.h>
#include<stdlib.h>
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
      sum = sum + arr[i][j];
    }
  }
  printf("sum of matrix elements = %d\n",sum);


}
