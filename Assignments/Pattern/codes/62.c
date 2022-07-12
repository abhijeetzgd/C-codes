/*
Pattern62
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
int row,col;
printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ;i++){

    int n = 'A';
    for(int j=1 ; j<=col ;j++){

      if(i+j<=col || i-j>=col){

        printf("   " );
        n++;
      } else {

        printf("%c  ",n );
        n++;
      }
    } printf("\n" );
  }
}
