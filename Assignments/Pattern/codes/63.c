/*
Pattern63
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
int row,col;
printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ;i++){

    int n = 64 + col;
    for(int j=1 ; j<=col ;j++){

      if(i+j<=col || i-j>=col){

        printf("   " );

      } else {

        printf("%c  ",n );
        n--;
      }
    } printf("\n" );
  }
}
