#include<stdio.h>
void main(){
  int row,col,n;

  printf("Enter row and column : " );
  scanf("%d %d",&row,&col);

  for(int i=1;i<=row;i++){
    n=0;
    for(int j=1;j<=col;j++){

      if(i+j<row+1 || j-i>=row){
        printf("   " );
      } else {

        if(j<=row){
            n++;
            printf("%d  ",n*n );
        } else {
          n--;
          printf("%d  ",n*n );
        }

      }

    }printf("\n" );
  }
}
