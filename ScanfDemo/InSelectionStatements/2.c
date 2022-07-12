#include<stdio.h>
void main(){
  int x,y;
  char ch;

  printf("Enter two values \n" );
  scanf("%d %d",&x,&y);

  printf("Enter operator\n" );
  scanf("%c\n",&ch );

  if(x ch y)
    printf("x is greater \n" );

  printf("out of if\n");
}
