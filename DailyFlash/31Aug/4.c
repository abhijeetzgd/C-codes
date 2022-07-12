#include<stdio.h>
void main(){

  int row,col;
  printf("Enter Number of row and column : ");
  scanf("%d %d",&row,&col);
  for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
    if(i%2!=0 ){
      printf("0 ");
    }else{
      printf("1 ");

    }
  }printf("\n" );
  }
}
