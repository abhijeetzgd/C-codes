/*
Pattern29
   1  2  3  4   5
1  *  *  *  *  *
2     *  *  *  *
3        *  *  *
4           *  *
5              *
*/

#include<stdio.h>
void main(){

int row,col;
printf("Enter Row and col : " );
scanf("%d %d",&row,&col );
    for(int i=1;i<=row;i++){

        for(int j=1;j<=col;j++){

            if((i-j)>0){
              printf("   " );
            } else {
              printf("*  " );
            }
        }printf("\n" );
    }
}
