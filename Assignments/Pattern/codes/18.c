/*

Pattern18
A A A A A
B B B B
C C C
D D
E

*/


#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

char ch ='A';
for(int i=1;i<=row;i++){

  for(int j=col;j>=i;j--){

		printf("%c\t",ch);

	}
  ch++;
  

	printf("\n");
}
}
