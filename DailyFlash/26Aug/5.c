#include<stdio.h>
void main(){

  int row,col,n=1;
  printf("Enter number of row and Col\n");
  scanf("%d %d",&row,&col);

  for(int i=1;i<=row;i++){

    for(int j=1;j<=i;j++){
      printf("0 ");
    }printf("\n" );

  }

}
