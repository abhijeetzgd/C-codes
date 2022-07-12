/*
Pattern61
        3
      2 3
    1 2 3
  0 1 2 3
    1 2 3
      2 3
        3
*/

#include<stdio.h>
void main(){
int row,col;
printf("Enter the row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ;i++){

    int n = 0;
    for(int j=1 ; j<=col ;j++){

      if(i+j<=col || i-j>=col){

        printf("   " );
        n++;
      } else {

        printf("%d  ",n );
        n++;
      }
    } printf("\n" );
  }
}
