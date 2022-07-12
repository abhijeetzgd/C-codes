/*

Pattern16
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

*/


#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){

  for(int j=col;j>=i;j--){

		printf("%d\t",i);

	}

	printf("\n");
}
}
