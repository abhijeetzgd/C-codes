/*
Pattern52
G G G G G G G
  E E E E E
    C C C
      A
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );

int ch =64 + 2*row;

for(int i=1 ; i<=row;i++){
    ch--;
    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){
        printf("   ");
      } else {
        printf("%c  ",ch );

      }
    } printf("\n" );
    ch--;

}

}
