/*
Pattern79
      A
     B B
    C C C
   D D D D
  E E E E E
   D D D D
    C C C
     B B
      A
*/

#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : " );
scanf("%d %d",&row,&col);
int n=65;
  for(int i=1; i<=row; i++){

    for(int j=1; j<=col; j++){

      if(i+j <= (row/2)+1  || j-i >= (row/2)+1 ||  i-j >= (row/2)+1 || i+j >= row+(row/2)+2 ){

        printf("  ");
      } else {

        if((i+j) % 2==0)
          printf("%c ",n);
        else
        printf("  ");

      }
    }printf("\n");

    if(i <= (row/2)){
      n++;
    } else {
      n--;
    }

  }
}
