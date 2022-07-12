/*
Pattern46
        A
      A B A
    A B C A B
  A B C D A B C
A B C D E A B C D
*/

#include<stdio.h>
void main(){

  int row,col,n=0,flag;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){

      char n ='@',ch ='@';

          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){

              printf("   " );
            } else {

                if(j<=row ){
                    n++;
                    printf("%c  ",n);


                } else {
                  ch++;
                  printf("%c  ",ch );
                }



            }
        }

        printf("\n" );
    }
}
