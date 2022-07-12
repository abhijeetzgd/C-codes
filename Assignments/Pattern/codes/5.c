/*
Pattern5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/

#include<stdio.h>
void main(){
	int row,col;
  printf("Enter row and column : ");
  scanf("%d %d",&row,&col);

  for(int i=1;i<=row;i++){
		char ch='a';
	  for(int j=1;j<=col;j++){

			printf("%c ",ch);
			ch++;
		}
		printf("\n" );
	}
}
