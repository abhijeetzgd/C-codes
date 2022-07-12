/*
Pattern56
3
2 3
1 2 3
0 1 2 3
1 2 3
2 3
3
*/

#include<stdio.h>
void main(){
  int row,col,n;

  printf("Enter row and column : " );
  scanf("%d %d",&row,&col );

  for(int i=1;i<=row ;i++){
    if(i<=col)
      n=col-i;
    else
      n=i-col;
    for(int j=1;j<=col;j++){

      if(i+j>row+1 || j-i>0){

        printf("   " );
      } else {
        printf("%d  ",n );
        n++;
      }

    }printf("\n" );
  }
}
