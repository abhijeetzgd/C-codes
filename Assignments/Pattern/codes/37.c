/*
Pattern37
        A
      B B B
    C C C C C
  D D D D D D D
E E E E E E E E E
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
        ch++;
        printf("\n" );
    }
}
