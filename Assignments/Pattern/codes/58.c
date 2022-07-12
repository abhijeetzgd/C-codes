/*
Pattern58
D
C D
B C D
A B C D
B C D
C D
D
*/

#include<stdio.h>
void main(){
  int row,col,n;

  printf("Enter row and column : " );
  scanf("%d %d",&row,&col );

  for(int i=1;i<=row ;i++){

    if(i<=col)
      n=65+col-i;
    else
      n=65+i-col;

    for(int j=1;j<=col;j++){

      if(i+j>row+1 || j-i>0){

        printf("   " );
      } else {
        printf("%c  ",n );
        n++;
      }

    }printf("\n" );
  }
}
