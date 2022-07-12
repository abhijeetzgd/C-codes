/*
Pattern74
 A B C D E
  A B C D
   A B C
    A B
     A
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );

for(int i=1 ; i<=row;i++){

    n = 'A';
    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){

        printf("   ");
      } else {

        if((i+j) % 2 == 0){
          printf("%c  ",n );
          n++;

        } else {
          printf("   " );
        }

      }
    } printf("\n" );
    
}
}
