/*
Pattern50
1 2 3 4 5 6 7
  1 2 3 4 5
    1 2 3
      1
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );

for(int i=1 ; i<=row;i++){

  n=1;

    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){
        printf("   ");
      } else {
        printf("%d  ",n );
        n++;
      }
    } printf("\n" );

}

}
