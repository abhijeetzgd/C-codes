#include<stdio.h>
void main(){

int row,col,n=1;

printf("Enter row and col : " );
scanf("%d %d",&row,&col );

    for(int i=1;i<=row;i++){

        for(int j=1;j<=col;j++){

            if(j-i<0){

            printf("\t" );
          } else {
              if(i%2!=0)
                printf("%d\t",n*n);
              else
                printf("%d\t",n*n*n);
          n++;
          }
        } printf("\n" );
    }
}
