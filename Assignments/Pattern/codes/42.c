/*
Pattern42
        A
      C B A
    E D C B A
  G F E D C B A
I H G F E D C B A
*/

#include<stdio.h>
void main(){

  int row,col;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){

          char n = 63 + 2*i;

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
              printf("%c  ",n);
              n--;
            }
        }

        printf("\n" );
    }
}
