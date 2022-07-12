#include<stdio.h>
void main(){

  int row;
  printf("Enter number of row : ");
  scanf("%d",&row);



  for(int i=1;i<=row;i++){
    int n=row-i;
    for(int j=1;j<=i;j++){
      printf("%d ",n);
      n++;
    }printf("\n");

  }
}
