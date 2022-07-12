#include<stdio.h>
void main(){
  int row,col;
  printf("Enter number of rows and column : " );
  scanf("%d %d",&row,&col );

  for(int i=1;i<=row;i++){
  for(int j=1;j<=i;j++){
    printf("* ");
  }printf("\n");
}

}
