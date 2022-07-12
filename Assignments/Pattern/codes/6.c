/*

Pattern6
5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

*/

#include<stdio.h>
void main(){
	int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

int n=row;
for(int i=1;i<=row;i++){

	for(int j=1;j<=col;j++){

			printf("%d ",n);

		}
		n--;
		printf("\n" );
	}
}
