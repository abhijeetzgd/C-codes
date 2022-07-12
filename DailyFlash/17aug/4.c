#include<stdio.h>
void main(){
  int row;
  printf("Enter the number of row\n" );
  scanf("%d",&row );

  for(int i =1 ; i<row*row ;i++){

    if(i%row != 0)
      printf("* " );
    else
      printf("\n" );

  }
printf("\n" );
}
