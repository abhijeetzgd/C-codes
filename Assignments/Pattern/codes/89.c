/*
Pattern89

      A       A
       B     B
        C   C
         D D
          E
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );
n=65;
for(int i=1 ; i<=row;i++){

    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){

        printf("  ");
      } else {

        if(j-i == 0 || i+j ==2*row ){

          printf("%c ",n );
      } else {

        printf("  " );
      }
    }
  }n++;
     printf("\n" );
}
}
