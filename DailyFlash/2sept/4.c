#include<stdio.h>
void main(){
int row,col;
int n=1;
printf("Enter number pf row and col : " );
scanf("%d %d",&row,&col);

for(int i=1;i<=row;i++){

  for(int j=1;j<=i;j++){

    printf("%d ",n*n);
    n++;
  }printf("\n");
}

}
