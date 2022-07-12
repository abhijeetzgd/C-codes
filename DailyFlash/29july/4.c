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
              n++;
            } else {
              printf("%d  ",n);
              n++;
            }
        }

        printf("\n" );
    }
}
