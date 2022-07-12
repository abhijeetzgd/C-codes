/*
Program 41. C/C++ program to store  the size of arrays (arr1,arr2,arr3,arr4) in array1 and find the sum of element of the array1

Program 41.
       #
      ###
     #####
    #######
   #########
*/

#include<stdio.h>

void main(){
  int r,c;
  printf("Enter size of row and column : ");
  scanf("%d%d",&r,&c);

char arr[r][c];

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      arr[i][j]=' ';
    }
  }

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(i+j<=3 || j-i >=5){
        arr[i][j]=' ';
      }else{
        arr[i][j]='*';
      }
    }
  }


    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        printf("%c ",arr[i][j]);
      }printf("\n");
    }

}
