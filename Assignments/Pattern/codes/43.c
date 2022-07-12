/*
Pattern43
        0
      1 0 1
    2 1 0 1 2
  3 2 1 0 1 2 3
4 3 2 1 0 1 2 3 4
*/

#include<stdio.h>
void main(){

  int row,col,n=0,flag;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){
        n=i-1;
        flag =1;
          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
                if(n>=1 && flag==1){
                    printf("%d  ",n);
                    n--;

                } else {
                    flag = 0;
                    printf("%d  ",n );
                    n++;
            }


            }
        }

        printf("\n" );
    }
}
