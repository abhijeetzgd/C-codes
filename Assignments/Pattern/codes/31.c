/*
Pattern31
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1

*/

#include<stdio.h>
void main(){

  int row,col,n;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){

          n=1;
          for(int j=1;j<=col;j++){

            if((i-j)>0){
              printf("   " );
            } else {
              printf("%d  ",n);
              n++;
            }
        }

        printf("\n" );
    }
}
