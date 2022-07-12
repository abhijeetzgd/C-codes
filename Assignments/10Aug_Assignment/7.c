#include<stdio.h>
void main(){
int row,col,n=0;

printf("Enter Row and col : " );
scanf("%d %d",&row,&col );

  for(int i = 0; i<row ; i++){

    for(int j=0;j<col;j++){

      if((i+j)<row-1|| (j-i)>row-1){

        printf("\t" );
      } else {
          if(j%2 == 0){

            printf("%d\t",i*2 );
          } else {

            printf("%d\t",i*j );
          }
        }
    }
    printf("\n" );
  }

}
