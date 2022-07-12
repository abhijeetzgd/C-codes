#include<stdio.h>
void main(){

int row,col,n,fact=1;

printf("Enter row and col : " );
scanf("%d %d",&row,&col );

    for(int i=1;i<=row;i++){
      n=1;

        for(int j=1;j<=col;j++){

          for(int k =1; k<= n;k++){
            fact = fact*k;
          }
          if(j-i<0){

            printf("\t" );
          } else {

            printf("%d\t",fact);
            n++;
            fact=1;
          }
        } printf("\n" );
    }
}
