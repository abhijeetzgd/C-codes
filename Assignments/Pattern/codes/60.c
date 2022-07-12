/*
Pattern60
        3
      3 2
    3 2 1
  3 2 1 0
    3 2 1
      3 2
        3
*/

#include<stdio.h>
void main(){
int row,col;
printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=0 ; i<=row ;i++){
    int n = 3;
    for(int j=0 ; j<=col ;j++){

      if(i+j<=col || i-j>=col){

        printf("   " );
      } else {

        printf("%d  ",n );
        n--;
      }
    } printf("\n" );
  }
}
