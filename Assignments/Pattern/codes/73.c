/*
Pattern73
 E D C B A
  D C B A
   C B A
    B A
     A
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );

n = 64+row;

for(int i=1 ; i<=row;i++){

    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){

        printf("   ");
      } else {

        if((i+j) % 2 == 0){
          printf("%c  ",n );
          n--;

        } else {
          printf("   " );
        }

      }
    } printf("\n" );
    n = 64+row-i;

}
}
