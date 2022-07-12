#include<stdio.h>
void main(){
int n=1,j=1;
  for(int i=1;i<=5;i++){

    for( j=1;j<=i;j++){

      printf("%d  ",n );
      n++;
    }
    printf("\n" );
    n--;

  }
}
/*

abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$ cc 2.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$ ./a.out
1
1  2
2  3  4
4  5  6  7
7  8  9  10  11

*/











/*
#include<stdio.h>
void main(){
    int  i=1;
    while(i<=5){

        int j=i;

        while(j<=n){

            printf("%d ",j );
            j++;
          }

        i++;
        printf("\n" );
      }
}
*/
