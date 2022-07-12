/*
Pattern66
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
*/

#include<stdio.h>
void main(){
int row,col;
printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ;i++){

    int n=1;
    for(int j=1 ; j<=col ;j++){

      if(i+j<=row || j-i>=row){

        printf("  " );
      } else {

        if(row % 2 != 0){

          if((i+j)%2==0 ){
            printf("%d ",n );
            n++;
          }
          else {
            printf("  ");
          }
        } else {

          if((i+j)%2!=0 ){
            printf("%d ",n );
            n++;}
          else
            printf("  ");
        }

      }
    } printf("\n" );
      n++;
  }
}
