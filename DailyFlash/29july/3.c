
#include<stdio.h>
void main(){

  int row,col,n=0,flag,cube;

  printf("Enter Row and col : " );
  scanf("%d %d",&row,&col );

      for(int i=1;i<=row;i++){
        //n=i-1;
        n=i;
        flag =1;
          for(int j=1;j<=col;j++){

            if((i+j)<=row || (j-i)>=row){
              printf("\t" );
            } else {
                if(n>1 && flag==1){
                    printf("%d\t",n*n*n);
                    n--;

                } else {
                    flag = 0;

                    printf("%d\t",n*n );
                    n++;
            }


            }
        }

        printf("\n" );
    }
}
