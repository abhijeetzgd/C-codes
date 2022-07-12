/*
Pattern67
     A
    B B
   C C C
  D D D D
 E E E E E
*/

#include<stdio.h>
void main(){
int row,col;
char n = 'A';
printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ;i++){


    for(int j=1 ; j<=col ;j++){

      if(i+j<=row || j-i>=row){

        printf("  " );
      } else {

        if(row % 2 != 0){

          if((i+j)%2==0 ){
            printf("%c ",n );

          }
          else {
            printf("  ");
          }
        } else {

          if((i+j)%2!=0 ){
            printf("%c ",n );
            }
          else
            printf("  ");
        }

      }
    } printf("\n" );
      n++;
  }
}
