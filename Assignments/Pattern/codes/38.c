/*
Pattern38
        A
      C C C
    E E E E E
  G G G G G G G
I I I I I I I I I
*/

#include<stdio.h>
void main(){

  int row,col;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );
  char ch = 'A';

      for(int i=1;i<=row;i++){

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
              printf("%c  ",ch);

            }
        }
        ch+=2;
        printf("\n" );
    }
}
