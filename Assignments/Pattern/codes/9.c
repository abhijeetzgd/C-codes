/*

Pattern9
E D C B A
E D C B A
E D C B A
E D C B A
E D C B A


*/


#include<stdio.h>
void main(){
	int row,col;
  printf("Enter row and column : ");
  scanf("%d %d",&row,&col);

  for(int i=1;i<=row;i++){
		int ch = 64+col;
	  for(int j=1;j<=col;j++){

			printf("%c ",ch);
			ch--;
		}
		printf("\n" );
	}
}
