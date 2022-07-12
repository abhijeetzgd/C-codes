/*
Pattern80
      A
     A B
    A B C
   A B C D
  A B C D E
   B C D E
    C D E
     D E
      E
*/
#include<stdio.h>
void main(){

int row,col,n=65,c=0;
printf("Enter row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1; i<=row; i++){

    for(int j=1; j<=col; j++){

      if(i+j <= (row/2)+1 || j-i >= (row/2)+1 || i-j >= (row/2)+1 || i+j >= row+(row/2)+2){

        printf("   ");
      } else {

        if((i+j) % 2==0){
          printf("%c  ",n);
          n++;
        }
        else{
        printf("   ");
}
      }
    }printf("\n");

    if(i <= (row/2)){
      n=65;
    } else if(i>row/2) {
      n = 66+c;
      c++;
    }

  }
}
