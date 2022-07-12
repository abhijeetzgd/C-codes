/*
Pattern45
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include<stdio.h>
void main(){

  int row,col,n=0,flag;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){
        n=1;
        flag =1;
          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("   " );
            } else {
                if(n<=i && flag==1){
                    printf("%d  ",n);
                    n++;

                } else {
                    flag = 0;
                    n--;
                    printf("%d  ",n-1 );
            }


            }
        }

        printf("\n" );
    }
}
