/*
Pattern71
 5 4 3 2 1
  4 3 2 1
   3 2 1
    2 1
     1
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );

n = row;

for(int i=1 ; i<=row;i++){

    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){

        printf("   ");
      } else {

        if((i+j) % 2 == 0){
          printf("%d  ",n );
          n--;
        } else {
          printf("   " );
        }

      }
    } printf("\n" );
    n=row -i;
}
}
