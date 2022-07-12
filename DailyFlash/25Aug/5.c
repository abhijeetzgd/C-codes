#include<stdio.h>
void main(){

  int row ,col;
  printf("Enter number of row and col : ");
  scanf("%d %d",&row,&col);

  for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){

      if(i%2==0){
        printf("1 ");
      }else{
        printf("0 ");

      }
    }printf("\n");
  }
}
