/*
Pattern65
     1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
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
            printf("%d ",n );
          else
            printf("  ");
        } else {

          if((i+j)%2!=0 )
            printf("%d ",n );
          else
            printf("  ");
        }

      }
    } printf("\n" );
      n++;
  }
}