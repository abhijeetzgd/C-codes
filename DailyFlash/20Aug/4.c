#include<stdio.h>
void main(){

  int row,col;

  printf("Enter row and col: " );
  scanf("%d %d",&row,&col );

  for(int i=1;i<=row*col;i++){
    if(i%col != 0)
    printf("%d  ",i );
    else
    printf("%d\n",i );
  }
}
