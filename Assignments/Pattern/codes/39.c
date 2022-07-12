/*
Pattern39
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
*/

#include<stdio.h>
void main(){

  int row,col;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){

        int n = 1;

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
              printf("%d  ",n);
              n++;
            }
        }

        printf("\n" );
    }
}
