/*
Pattern41
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I
*/

#include<stdio.h>
void main(){

  int row,col;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){

          char n ='A';

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
              printf("%c  ",n);
              n++;
            }
        }

        printf("\n" );
    }
}
