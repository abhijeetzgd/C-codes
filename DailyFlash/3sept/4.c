#include<stdio.h>
void main(){

  int n=1,row;
  printf("Enter number of rows : ");
  scanf("%d",&row);

  for(int i=1;i<=row;i++){
    for(int j=1 ; j<=i;j++){
      printf("%d ",n*n*n);
      n++;
    }printf("\n" );
  }

}
