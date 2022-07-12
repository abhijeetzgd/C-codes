/*
Pattern32
E E E E E
  D D D D
    C C C
      B B
        A

*/

#include<stdio.h>
void main(){

  int row,col,n;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );
  n = 64+row;
      for(int i=1;i<=row;i++){

          for(int j=1;j<=col;j++){

            if((i-j)>0){
              printf("   " );
            } else {
              printf("%c  ",n);

            }
        }
        n--;
        printf("\n" );
    }
}
