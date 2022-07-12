/*
Pattern12
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){
  for(int j=1;j<=i;j++){
		printf("%d\t",j);
	}
	printf("\n");
}
}
