#include<stdio.h>
void main(){

  int n=1,row,col;
  printf("Enter number of rows and column : ");
  scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){
  for(int j=1;j<=i;j++){
  printf("%d ",n);
    n++;
  }printf("\n");
}

  }
