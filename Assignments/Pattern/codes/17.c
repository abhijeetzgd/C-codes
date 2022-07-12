/*
Pattern17
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/


#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){
int n=1;
  for(int j=col;j>=i;j--){

		printf("%d\t",n);
    n++;

	}

	printf("\n");
}
}
