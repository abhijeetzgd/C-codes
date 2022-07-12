/*

Program 28. C program to find largest element in an array

	Input : size of array size_arr;
		1 2 43 5 87 12 33

	output: 87

	test cases :
		1.T =4------------> number of times the user shud take the input in array and print the largest number
		2.No negative value allowed shud handel the case


*/

#include<stdio.h>
#include<stdlib.h>
void main(){

  int r,c,largest=0;
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
      if(largest<arr[i][j])
        largest = arr[i][j];
    }
  }
  printf("Largest element from array is = %d\n",largest);


}
