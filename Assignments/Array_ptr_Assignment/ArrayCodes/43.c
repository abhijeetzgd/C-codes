/*
Program 43.
       1
      1 2
     3   5
    8     13
  21        34
	print the pattern using array

*/
#include<stdio.h>

void main(){
  int r,c;
  printf("Enter size of row and column : ");
  scanf("%d%d",&r,&c);

int arr[r][c];
int m=1;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      arr[i][j]=' ';
    }
  }

  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){


      if(i+j==4 || j-i ==4){
        arr[i][j]=m;
        m++;
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
