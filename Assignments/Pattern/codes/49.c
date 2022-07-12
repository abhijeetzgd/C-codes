/*
Pattern49
7 7 7 7 7 7 7
  5 5 5 5 5
    3 3 3
      1
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter the row & col " );
scanf("%d %d",&row,&col );
n=row*2;
for(int i=1 ; i<=row;i++){
  n--;

    for(int j=1 ;j<= col;j++){
      
      if(j-i < 0 || i+j >2*row ){
        printf("   ");
      } else {
        printf("%d  ",n );
      }
    } printf("\n" );
    n--;
}

}
