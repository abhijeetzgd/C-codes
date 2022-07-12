#include<stdio.h>
void main(){
  int row , col ;

  printf("Enter the number of rows and column ; " );
  scanf("%d %d",&row,&col );

  for(int i=0;i<row;i++){

    for(int j =0; j<col; j++){

      if(j-i < 0){
        printf("   " );
      } else {
        printf("%d  ",(i+j)*j );
      }
}

    printf("\n" );
  }

}
