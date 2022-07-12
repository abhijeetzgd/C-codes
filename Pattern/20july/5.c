#include<stdio.h>
void main(){
  int row,col;
  printf("Enter row and column ");
  scanf("%d %d",&row,&col);
  int x=5;
  for(int i=1 ; i<=row ; i++){

        for(int j=col ; j>=i ;j--){
          printf("%d\t",x*x );
        }
        x--;
        printf("\n" );
  }
}
