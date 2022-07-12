/*
Pattern19
A B C D E
A B C D
A B C
A B
A

*/


#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){
  char ch ='A';

  for(int j=col;j>=i;j--){

		printf("%c\t",ch);
    ch++;

	}


	printf("\n");
}
}
