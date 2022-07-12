/*
Pattern15
* * * * *
* * * *
* * *
* *
*

*/


#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){

  for(int j=col;j>=i;j--){

		printf("*\t");

	}

	printf("\n");
}
}
