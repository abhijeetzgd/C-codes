/*
Pattern96

  * * * * * * * * * *
  * * * *     * * * *
  * * *         * * *
  * *             * *
  *                 *
*/

#include<stdio.h>
void main(){
int row,col;
printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ;i++){


    for(int j=1 ; j<=col ;j++){

      if(i+j<=row+1 || j-i>=row){

        printf("*  " );

      } else {
        printf("   " );
        /*if(row % 2 != 0){

          if((i+j)%2==0 )
            printf("* " );
          else
            printf("  ");
        } else {

          if((i+j)%2!=0 )
            printf("* " );
          else
            printf("  ");
        }*/

      }
    } printf("\n" );
  }
}
