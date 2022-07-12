#include<stdio.h>
void main(){

  int n=2,row,col;

  printf("Enyter the row and column: " );
  scanf("%d %d",&row,&col );

  for(int i=1;i<=row*col;i++){
    if(i%col == 0){
      printf("%d\n",n);
      n=2;
    }else{
      printf("%d ",n);
      n=n+2;
    }
  }

}
