/*
Pattern57
D
D C
D C B
D C B A
D C B
D C
D
*/

#include<stdio.h>
void main(){
  int row,col,n;

  printf("Enter row and column : " );
  scanf("%d %d",&row,&col );

  for(int i=1;i<=row ;i++){

    int n = 64 + col;
    for(int j=1;j<=col;j++){

      if(i+j>row+1 || j-i>0){

        printf("   " );
      } else {
        printf("%c  ",n );
        n--;

      }

    }printf("\n" );

  }
}
