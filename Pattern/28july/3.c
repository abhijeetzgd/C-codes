#include<stdio.h>
void main(){

int n=1,row,col;

printf("Enter the Row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1;i<=row;i++){

    for(int j=1;j<=col;j++){

      if(i-j > 0){

        printf("\t" );
      } else {

        printf("%d\t",n*n );
        n++;
      }
    } printf("\n" );
  }
}
