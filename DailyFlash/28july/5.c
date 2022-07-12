#include<stdio.h>
void main(){

int row,col,n,a=0,b=1,sum=0;

printf("Enter row and col : " );
scanf("%d %d",&row,&col );

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){

          if(j-i<0){

            printf("\t" );
          } else {

            printf("%d\t",a);
              sum = a+b;
              a = b;
              b = sum;
          }

        } printf("\n" );
    }
}
