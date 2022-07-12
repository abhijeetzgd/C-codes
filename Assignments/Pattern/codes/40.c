/*
Pattern40
        1
      3 2 1
    5 4 3 2 1
  7 6 5 4 3 2 1
9 8 7 6 5 4 3 2 1
*/

#include<stdio.h>
void main(){

  int row,col;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );


int n =1;
      for(int i=1;i<=row;i++){

          n = 2*i - 1;
          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
              printf("%d  ",n);
              n--;
            }
        }
        
        printf("\n" );
    }
}
