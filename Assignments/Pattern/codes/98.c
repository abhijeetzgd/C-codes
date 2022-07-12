/*
Pattern98
  *             *
  * *         * *
  * * *     * * *
  * * * * * * * *
  * * *     * * *
  * *         * *
  *             *
*/
#include<stdio.h>
void main(){
int row,col;
printf("Enter row and column as a single Pattern " );
scanf("%d %d",&row,&col );
  for(int i=1;i<=row ;i++){

    for(int j=1;j<=col;j++){

      if(i+j>row+1 || j-i>0){
        printf("   " );
      } else {
        printf("*  " );
      }

}






  //for(int i=1 ; i<=row ;i++){


      for(int j=1;j<=col;j++){
      if(i+j<=col || i-j>=col){
        printf("   " );
      } else {
        printf("*  " );
      }
    } printf("\n" );
  }

}
