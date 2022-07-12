/*
Pattern99

        *             *
      * * *         * * *
    * * * * *     * * * * *
  * * * * * * * * * * * * * *
*/
#include<stdio.h>
void main(){

  int row,col,n;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
              printf("*  ");

            }
        }
        for(int j=1;j<=col;j++){

          if((i+j)<=row || (j-i)>=row){
            printf("   " );
          } else {
            printf("*  ");

          }
      }
        printf("\n" );
    }
}
