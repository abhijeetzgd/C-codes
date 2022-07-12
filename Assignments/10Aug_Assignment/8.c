#include<stdio.h>
void main(){

  int n,row,col;

  printf("Enter row and col : " );
  scanf("%d %d",&row,&col );
  n =65;
  for(int i =1;i<=row;i++){

    for(int j =1;j<=col;j++){

        if((i-j)>0 || (i+j)>col+1){

          printf("   " );
        }else {

          if(i %2 == 0)
            printf("=  " );
          else{
            printf("%c  ",n );
            n++;
          }
        }
    }
    if(i%2!=0)
      n = n - 5;

    printf("\n" );
  }
}
