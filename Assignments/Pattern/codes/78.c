/*
Pattern78
       1
      1 2
     1 2 3
    1 2 3 4
   1 2 3 4 5
    1 2 3 4
     1 2 3
      1 2
       1
*/
#include<stdio.h>
void main(){

int row,col,n=1,c=0;
printf("Enter row and column : " );
scanf("%d %d",&row,&col);

  for(int i=1; i<=row; i++){

    for(int j=1; j<=col; j++){

      if(i+j <= (row/2)+1 || j-i >= (row/2)+1 || i-j >= (row/2)+1 || i+j >= row+(row/2)+2){

        printf("   ");
      } else {

        if((i+j) % 2==0){
          printf("%d  ",n);
          n++;
        }
        else{
        printf("   ");
}
      }
    }printf("\n");
      n=1;
  }
}
