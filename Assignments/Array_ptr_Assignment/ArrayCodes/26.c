/*

Program 26: Write a C Program that has a two dimensional array in it of order 3X3, take values
from user to fill that array and check whether that Matrix{Array} is an Identity Matrix or Not.
{Note : An identity matrix is the one whose all diagonal elements are one’s (1) and all non-

*/

#include<stdio.h>
#include<stdlib.h>
void main(){

  int r,c,sum=1;
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
      if(i == j ){

         if(arr[i][j]==1){
          continue;
         }else{

           printf("it is not identity matrix \n");
           exit(0);
         }
       }else{
         if(arr[i][j]==0){
          continue;
         }else{

           printf("it is not identity matrix \n");
           exit(0);
         }
       }
    }
  }
  printf("it is identity matrix\n");


}
