/*
Pattern30
5 5 5 5 5
  4 4 4 4
    3 3 3
      2 2
        1
*/

#include<stdio.h>
void main(){

  int row,col,n;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );
  n=row;
      for(int i=1;i<=row;i++){

          for(int j=1;j<=col;j++){

            if((i-j)>0){
              printf("   " );
            } else {
              printf("%d  ",n );
            }
        }
        n--;
        printf("\n" );
    }
}
