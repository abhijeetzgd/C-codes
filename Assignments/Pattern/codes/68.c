/*
Pattern68
     A
    A B
   A B C
  A B C D
 A B C D E
*/

#include<stdio.h>
void main(){
int row,col;

printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ;i++){

    char n = 'A';

    for(int j=1 ; j<=col ;j++){

      if(i+j<=row || j-i>=row){

        printf("  " );
      } else {

        if(row % 2 != 0){

          if((i+j)%2==0 ){
            printf("%c ",n );
            n++;
          }
          else {
            printf("  ");
          }
        } else {

          if((i+j)%2!=0 ){
            printf("%c ",n );
            n++;
            }
          else
            printf("  ");
        }

      }
    } printf("\n" );
      
  }
}
