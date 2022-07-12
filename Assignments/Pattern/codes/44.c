/*
Pattern44
        A
      B A B
    C B A B C
  D C B A B C D
E D C B A B C D E
*/

#include<stdio.h>
void main(){

  int row,col,n=0,flag;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){
        n=65+i-1;
        flag =1;
          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
                if(n>='B' && flag==1){
                    printf("%c  ",n);
                    n--;

                } else {
                    flag = 0;
                    printf("%c  ",n );
                    n++;
            }


            }
        }

        printf("\n" );
    }
}
