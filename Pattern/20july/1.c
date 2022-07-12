#include<stdio.h>
void main(){
  int row,col;
  printf("Enter the Row and col");
  scanf("%d %d",&row,&col);

  for(int i=0;i<row;i++){

    for (int j=0;j<=i;j++){

      printf("*  ");

    }
    printf("\n");
  }
}
