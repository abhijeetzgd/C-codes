/*
Pattern87
      1       1
       2     2
        3   3
         4 4
          5
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );

for(int i=1 ; i<=row;i++){

    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){

        printf("  ");
      } else {

        if(j-i == 0 || i+j ==2*row ){

          printf("%d ",i );
      } else {

        printf("  " );
      }
    }
    } printf("\n" );
}
}
