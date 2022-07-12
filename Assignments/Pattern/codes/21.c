/*

Pattern21
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/


#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){

  int n=row;

  for(int j=col;j>=i;j--){

		printf("%d  ",n);
    n--;

	}

	printf("\n");
}
}
