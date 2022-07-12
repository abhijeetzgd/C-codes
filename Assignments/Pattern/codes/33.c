/*
Pattern33
A B C D E
  A B C D
    A B C
      A B
        A
*/

#include<stdio.h>
void main(){

  int row,col,n;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );
      for(int i=1;i<=row;i++){
        n = 65;

          for(int j=1;j<=col;j++){

            if((i-j)>0){
              printf("   " );
            } else {
              printf("%c  ",n);
              n++;

            }
        }
        printf("\n" );
    }
}
