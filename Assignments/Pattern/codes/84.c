/*
Pattern84
          A
         B B
        C   C
       D     D
      E       E
*/

#include<stdio.h>
void main(){

  int row,col;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );
  char n = 'A';
      for(int i=1;i<=row;i++){

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){

              printf("  " );
            } else {

              if(i+j == row+1 || j-i == row-1){

                printf("%c ",n );
              } else {

                printf("  " );
              }
            }
        }
        n++;
        printf("\n" );
    }
}
