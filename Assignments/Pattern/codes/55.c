/*
Pattern55
3
3 2
3 2 1
3 2 1 0
3 2 1
3 2
3

*/

#include<stdio.h>
void main(){
  int row,col,n;

  printf("Enter row and column : " );
  scanf("%d %d",&row,&col );

  for(int i=1;i<=row ;i++){
    n=col;
    for(int j=1;j<=col;j++){

      if(i+j>row+1 || j-i>0){
        printf("   " );
      } else {
        n--;
        printf("%d  ",n );

      }

    }printf("\n" );
  }
}
