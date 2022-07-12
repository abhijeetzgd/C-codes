/*

Pattern7
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/


#include<stdio.h>
void main(){
	int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){
	int n=col;

	for(int j=1;j<=col;j++){
			printf("%d ",n);
			n--;
		}
		printf("\n" );
	}
}
