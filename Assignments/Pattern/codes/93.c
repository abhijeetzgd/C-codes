/*
Pattern93
           5
          4 4
         3   3
        2     2
       1       1
        2     2
         3   3
          4 4
           5
*/

#include<stdio.h>
void main(){

int row,col,n;
printf("Enter row and column : " );
scanf("%d %d",&row,&col);
 n=row/2+1

;  for(int i=1; i<=row; i++){

    for(int j=1; j<=col; j++){

      if(i+j <= (row/2)+1  || j-i >= (row/2)+1 ||  i-j >= (row/2)+1 || i+j >= row+(row/2)+2 ){
        printf("   ");
      } else {

        if(i+j == (row/2)+2  || j-i == (row/2) ||  i-j == (row/2) || i+j == row+(row/2)+1 ){

        printf("%d  ",n);

} else {

printf("   ");
}
      }
    }
    if(i<=row/2){
      n--;
    } else {
      n++;
    }
    printf("\n");
  }
}
