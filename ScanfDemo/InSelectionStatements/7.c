#include<stdio.h>
void main(){
  int x,y;

  printf("Enter two values \n" );
  scanf("%d %d",&x,&y);
  if(x=y)
    printf("x is equal y \n" );//always true for non zero value

  printf("out of if\n");
}
