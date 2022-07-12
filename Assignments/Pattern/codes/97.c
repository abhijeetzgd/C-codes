/*
Pattern97
  *                 *
  * *             * *
  * * *         * * *
  * * * *     * * * *
  * * * * * * * * * *
*/

#include<stdio.h>
void main(){

int row,col;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );

for(int i=1 ; i<=row;i++){

    for(int j=1 ;j<= col;j++){

      if(j-i <= 0 || i+j >2*row ){
        printf("*  ");
      } else {
        printf("   " );
      }
    } printf("\n" );
}


}
