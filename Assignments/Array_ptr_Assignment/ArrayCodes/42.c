/*
Program 42.

       #
      # #
     #   #
    #     #
   #########
	print the pattern by using array	*/

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

      if(i==r-1){
        arr[i][j]='#';
        continue;
      }

      if(i+j==4 || j-i ==4){
        arr[i][j]='*';
      }else{
        arr[i][j]=' ';
      }

    }
  }


    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        printf("%c ",arr[i][j]);
      }printf("\n");
    }

}
