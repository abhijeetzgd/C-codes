/*

Pattern4
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
*/


#include<stdio.h>
void main(){
	int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

char ch ='A';
for(int i=1;i<=row;i++){

	for(int j=1;j<=col;j++){

			printf("%c ",ch);
		}
		printf("\n" );
		ch++;
	}
}
