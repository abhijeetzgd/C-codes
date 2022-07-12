#include<stdio.h>
void main(){

  int row,col;
  printf("Enter number of rows and col");
  scanf("%d %d",&row,&col);
  int n=row+4;
  for(int i=1;i<=row;i++){

    for(int j=1; j<=i ;j++){
      n--;
      printf("%d ",n);
    }printf("\n");
    n=n+1;
}
}
