#include<stdio.h>
void main(){
int n=1;
  for(int i=5;i>0;i--){

    for(int j=i;j>0;j--){

      printf("%d  ",j*n );
    }

    printf("\n" );
    n++;
  }

}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$ cc 3.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$ ./a.out
5  4  3  2  1
8  6  4  2
9  6  3
8  4
5
*/
