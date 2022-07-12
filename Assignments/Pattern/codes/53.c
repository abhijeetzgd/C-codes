/*
Pattern53
A B C D E F G
  A B C D E
    A B C
      A
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );


for(int i=1 ; i<=row;i++){
  int ch = 'A';

    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){
        printf("   ");
      } else {
        printf("%c  ",ch );
        ch++;
      }
    } printf("\n" );


}

}
