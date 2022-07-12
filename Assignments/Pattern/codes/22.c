/*
Pattern22
E E E E E
D D D D
C C C
B B
A
*/


#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

int ch =64+row;

for(int i=1;i<=row;i++){

  for(int j=col;j>=i;j--){

		printf("%c  ",ch);

	}
  ch--;
	printf("\n");
}
}
