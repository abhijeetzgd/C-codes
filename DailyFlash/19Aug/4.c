#include<stdio.h>
void main(){

  int n =1,row,col;

  printf("Enter number of row & column  : " );
  scanf("%d%d",&row,&col );

  for(int i=1; i<=row*col ;i++){
    if(i%col == 0){
      printf("%d\n",n);
      n=1;
    } else {
      printf("%d ",n );
      n++;
    }
  }

}
