/*
Pattern88
      5       5
       4     4
        3   3
         2 2
          1
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );
n=row;
for(int i=1 ; i<=row;i++){

    for(int j=1 ;j<= col;j++){

      if(j-i < 0 || i+j >2*row ){

        printf("  ");
      } else {

        if(j-i == 0 || i+j ==2*row ){

          printf("%d ",n );
      } else {

        printf("  " );
      }
    }
  }n--;
     printf("\n" );
}
}
