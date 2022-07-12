/*
Pattern82
          1
         2 2
        3   3
       4     4
      5       5
*/

#include<stdio.h>
void main(){

  int row,col,n=1;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){

              printf("  " );
            } else {

              if(i+j == row+1 || j-i == row-1){

                printf("%d ",i );
              } else {

                printf("  " );
              }
            }
        }
        printf("\n" );
    }
}
