#include<stdio.h>
void main(){

int row,col,n;
printf("Enter number of row and column\n" );
scanf("%d %d",&row,&col);

n=row+4;
for(int i=1;i<=row;i++){

  for(int j=1; j<=i ;j++){
    n--;
    printf("%d ",n);
  }printf("\n");
  n=n+1;
}
}
