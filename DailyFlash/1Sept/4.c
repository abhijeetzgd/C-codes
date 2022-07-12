#include<stdio.h>
void main(){
  int row;
  printf("Enter number ");
  scanf("%d",&row);

  for(int i=1 ; i<=row ; i++){
    for(int j=1 ; j<=i ; j++){
      if(i%2==0){
        printf("B ");
      }else{
        printf("A ");

      }
    }printf("\n");
  }

}
