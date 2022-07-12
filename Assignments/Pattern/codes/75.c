/*
Pattern75
      *
     * *
    * * *
   * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
*/

#include<stdio.h>
void main(){

  int row,col;
printf("Enter row and column : " );
scanf("%d %d",&row,&col);
  for(int i=1; i<=row; i++){

    for(int j=1; j<=col; j++){

      if(i+j <= (row/2)+1  || j-i >= (row/2)+1 ||  i-j >= (row/2)+1 || i+j >= row+(row/2)+2 ){
        printf(" ");
      } else {
        if((i+j) % 2==0)
          printf("*");
        else
        printf(" ");
      }
    }printf("\n");
  }
}
