/*
Pattern100

      *         *
     * *       * *
    * * *     * * *
   * * * *   * * * *
  * * * * * * * * * *
*/

#include<stdio.h>
void main(){
int row,col,n=1;
printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ;i++){

    for(int j=1 ; j<=col ;j++){

      if(i+j<=row || j-i>=row){

        printf("  " );
      } else {

        if(row % 2 != 0){

          if((i+j)%2==0 )
            printf("* " );
          else
            printf("  ");
        } else {

          if((i+j)%2!=0 )
            printf("* " );
          else
            printf("  ");
        }

      }
    }
    for(int j=1 ; j<=col ;j++){

      if(i+j<=row || j-i>=row){

        printf("  " );
      } else {

        if(row % 2 != 0){

          if((i+j)%2==0 )
            printf("* " );
          else
            printf("  ");
        } else {

          if((i+j)%2!=0 )
            printf("* " );
          else
            printf("  ");
        }

      }
    }printf("\n" );

  }
}
