#include<stdio.h>
void main(){
  int row,col;
  printf("Enter row and column ");
  scanf("%d %d",&row,&col);

  for(int i=1 ; i<=row ; i++){
        int x=1;
        for(int j=col ; j>=i ;j--){
          printf("%d  ",x );
          x++;
        }
        printf("\n" );
  }
}
