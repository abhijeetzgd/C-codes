/*
Pattern28
         A
       A B
     A B C
   A B C D
 A B C D E
 */


#include<stdio.h>
void main(){

int row,col;
printf("Enter row and column : ");
scanf("%d %d",&row,&col);


for(int i=1;i<=row;i++){

  char ch ='A';

  for(int k=col-1 ;k>=i;k--){
    printf("   " );
  }

  for(int j=1;j<=i;j++){

		printf("%c  ",ch);
    ch++;

}
	printf("\n");
}
}
