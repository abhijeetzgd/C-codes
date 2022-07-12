#include<stdio.h>
void main(){

  int row,col;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){

        char ch = '@';

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("\t" );
              if(j<=row){
                ch++;
              } else {
                ch--;
              }
            } else {
              //printf("%c  ",ch);

              if(j<=row){
                ch++;
                
                printf("%c\t",ch );

              } else {
                ch--;
                printf("%c\t",ch );

              }

            }
        }
        ch++;
        printf("\n" );
    }
}
